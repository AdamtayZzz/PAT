    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<cmath>
    using namespace std;
    int main()
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            int g1;
            cin>>g1;
            vector<int> l;
            int t;
            for(int j=0;j<n-1;j++){
                cin>>t;
                if(t>=0&&t<=m)
                    l.push_back(t);
            }
            sort(l.begin(),l.end());
            int g2=0;
            for(vector<int>::iterator iter=l.begin()+1;iter!=l.end()-1;iter++){
                g2+=*iter;
            }
            cout<<int(round(float(g1+float(g2)/(l.size()-2))/2));
            if(i!=n-1)
                cout<<endl;
        }
        return 0;
    }
