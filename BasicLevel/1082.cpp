    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        int N;
        cin>>N;
        int max_id,max_dis=0;
        int min_id,min_dis=10000;
        int id,x,y;
        for(int i=0;i<N;i++){
            cin>>id>>x>>y;
            int t=x*x+y*y;
            if(t<min_dis){
                min_dis=t;
                min_id=id;
            }
            if(t>max_dis){
                max_dis=t;
                max_id=id;
            }
        }
        printf("%04d %04d",min_id,max_id);
        return 0;
    }
