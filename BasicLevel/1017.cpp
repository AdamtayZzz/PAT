    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string num;
        int a;
        cin>>num>>a;
        int count=0;
        bool flag=false;
        for(unsigned int i=0;i<num.size();i++){
            count*=10;
            count+=(num[i]-'0');
            int k=count/a;
            count=count%a;
            if(k!=0)
                flag=true;
            if(flag||i==num.size()-1)
                cout<<k;
        }
        cout<<" "<<count;
        return 0;
    }
