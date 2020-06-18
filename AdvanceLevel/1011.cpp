    #include<iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        char out[3]={'W','T','L'};
        char r[3];
        float max_v;
        int max_i;
        float t;
        float result =1;
        for(int i=0;i<3;i++){
            max_v=0;max_i=0;
            for(int j=0;j<3;j++){
                cin>>t;
                if(t>max_v){
                    max_v=t;
                    max_i=j;
                }
            }
            r[i]=out[max_i];
            result *=max_v;
        }
        printf("%c %c %c ",r[0],r[1],r[2]);
        printf("%.2f",(0.65*result-1)*2);
        return 0;
    }
