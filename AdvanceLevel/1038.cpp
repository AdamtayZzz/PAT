    #include<iostream>
    #include<string>
    #include<vector>
    #include<algorithm>
    using namespace std;
    bool com(string a,string b){
        return a+b<b+a;
    }
    int main()
    {
        int n;
        cin>>n;
        string result="";
        vector<string> l(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        sort(l.begin(),l.end(),com);
        for(int i=0;i<n;i++){
            result+=l[i];
        }
        while(result.length()!=0&&result[0]=='0')
            result.erase(result.begin());
        if(result.length()==0) cout<<"0";
        cout<<result;
        return 0;
    }
