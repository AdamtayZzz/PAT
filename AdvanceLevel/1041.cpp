    #include<iostream>
    #include<vector>
    #include<map>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        vector<int> l(n);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>l[i];
            if(m.count(l[i]))
                m[l[i]]++;
            else
                m[l[i]]=1;
        }
        for(int i=0;i<n;i++){
            if(m[l[i]]==1){
                cout<<l[i];
                return 0;
            }
        }
        cout<<"None";
        return 0;
    }
