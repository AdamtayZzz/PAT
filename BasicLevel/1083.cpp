    #include<iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        int N;
        cin>>N;
        vector<int> c(N);
        int t;
        for(int i=1;i<=N;i++){
            cin>>t;
            t= t>i?t-i:i-t;
            c[t]+=1;
        }
        bool flag=false;
        for(int i=N-1;i>=0;i--){
            if(c[i]>1){
                if(flag)
                    cout<<endl<<i<<" "<<c[i];
                else
                    cout<<i<<" "<<c[i];
                flag=true;
            }
        }
        return 0;
    }
