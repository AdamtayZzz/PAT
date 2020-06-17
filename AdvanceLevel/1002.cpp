    #include<iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        vector<float> l(1001);
        int n,b;
        float a;
        for(int i=0;i<2;i++){
            cin>>n;
            for(int j=0;j<n;j++){
                cin>>b>>a;
                l[b]+=a;
            }
        }
        int c=0;
        for(int i=1001;i>=0;i--){
            if(l[i])
                c++;
        }
        printf("%d",c);
        for(int i=1001;i>=0;i--){
            if(l[i])
                printf(" %d %.1f",i,l[i]);
        }
        return 0;
    }
