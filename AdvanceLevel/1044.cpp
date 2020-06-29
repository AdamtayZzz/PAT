    #include<iostream>
    #include<map>
    #include<vector>
    using namespace std;
    int main()
    {
        int n,t;
        cin>>n>>t;
        vector<int> l(n+1);
        map<int,int> m;
        int start=0;
        int min_value=123123123;
        for(int i=1;i<=n;i++){
            cin>>l[i];
            l[i]+=l[i-1];
            while(l[i]-l[start]>=t){
                if(l[i]-l[start]<min_value){
                    min_value=l[i]-l[start];
                    m.clear();
                    m[start]=i;
                }
                else if(l[i]-l[start]==min_value){
                    m[start]=i;
                }
                start++;
            }
        }
        for(map<int,int>::iterator iter=m.begin();iter!=m.end();iter++){
            cout<<iter->first+1<<"-"<<iter->second<<endl;
        }
        return 0;
    }
