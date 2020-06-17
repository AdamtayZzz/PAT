    #include<iostream>
    #include<vector>
    using namespace std;

    int main()
    {
        int k;
        cin>>k;
        vector<int> l(k);
        bool mark = false;
        for(int i=0;i<k;i++){
            cin>>l[i];
            if(l[i]>=0)
                mark=true;
        }
        if(!mark){
            cout<<"0 "<<l[0]<<" "<<l[k-1];
            return 0;
        }
        int max_sum=l[0],max_s=0,max_e=0;
        int cur_sum=0,cur_s=0,cur_e=0;
        for(int i=0;i<k;i++){
            int temp =cur_sum + l[i];
            //求目前最大值
            if(l[i]>temp){
                cur_sum = l[i];
                cur_s=i;cur_e=i;
            }
            else{
                cur_sum = temp;
                cur_e=i;
            }
            //与全局最大值比较
            if(cur_sum>max_sum){
                max_sum=cur_sum;
                max_s=cur_s;
                max_e=cur_e;
            }
        }
        cout<<max_sum<<" "<<l[max_s]<<" "<<l[max_e];
        return 0;
    }
