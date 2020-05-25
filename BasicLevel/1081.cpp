    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        getchar();
        string str;
        for(int i=0;i<n;i++){
            getline(cin,str);
            int c1=0,c2=0;
            if(str.length()<6){
                cout<<"Your password is tai duan le.";
                if(i!=n-1)
                    cout<<endl;
                continue;
            }
            bool mark=false;
            for(unsigned int j=0;j<str.length();j++){
                if(isdigit(str[j])){
                    c1++;
                }
                else if(isalpha(str[j])){
                    c2++;
                }
                else if(str[j]=='.'){
                    continue;
                }
                else{
                    mark=true;
                    break;
                }
            }
            if(mark)
                cout<<"Your password is tai luan le.";
            else if(c1==0)
                cout<<"Your password needs shu zi.";
            else if(c2==0)
                cout<<"Your password needs zi mu.";
            else
                cout<<"Your password is wan mei.";
            if(i!=n-1)
                cout<<endl;
        }
        return 0;
    }
