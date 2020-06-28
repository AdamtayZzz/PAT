    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    struct station{
        double price;
        double distance;
    };
    bool com(station a,station b){
        return a.distance<b.distance;
    }
    int main()
    {
        double cmax,d,davg;
        int n;
        cin>>cmax>>d>>davg>>n;
        vector<station> l(n+1);
        for(int i=0;i<n;i++){
            cin>>l[i].price>>l[i].distance;
        }
        //把终点加进去
        l[n].distance=d;
        l[n].price=0.0;
        sort(l.begin(),l.end(),com);
        //检查起点是否为0
        if(l[0].distance!=0){
            cout<<"The maximum travel distance = 0.00";
            return 0;
        }
        double total=0.0,cur_tank=0.0,cur_price=l[0].price,cur_dis=0.0;
        while(cur_dis<d){
            double min_price=123123123.0,min_distance;
            bool flag=false;
            for(int j=1;j<=n;j++){
                if(l[j].distance<=cur_dis)
                    continue;
                if(l[j].distance>cmax*davg+cur_dis)
                    break;
                if(l[j].price<cur_price){
                    total+= (l[j].distance-cur_dis-cur_tank)*cur_price/davg;
                    cur_price=l[j].price;
                    cur_dis = l[j].distance;
                    cur_tank = 0;
                    flag=true;
                    break;
                }
                if(l[j].price<min_price){
                    min_price=l[j].price;
                    min_distance = l[j].distance;
                }
            }
            if(flag==false&&min_price!=123123123){
                total+= (cmax*davg-cur_tank)*cur_price/davg;
                cur_tank = cmax*davg - (min_distance-cur_dis);
                cur_price = min_price;
                cur_dis = min_distance;
            }
            if(flag==false&&min_price==123123123){
                cur_dis += cmax*davg;
                printf("The maximum travel distance = %.2f",cur_dis);
                return 0;
            }
        }
        printf("%.2f",total);
        return 0;
    }
