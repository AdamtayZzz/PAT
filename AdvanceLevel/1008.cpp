    #include<iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        vector<int> l(n+1);
        l[0]=0;
        for(int i=1;i<=n;i++){
            cin>>l[i];
        }
        int total=0;
        for(int i=1;i<=n;i++){
            int t=l[i]-l[i-1];
            if(t>0)
                total+=(t*6+5);
            else
                total+=((-1)*t*4+5);
        }
        cout<<total;
        return 0;
    }
