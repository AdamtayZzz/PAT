    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string method,str;
        getline(cin,method);
        getline(cin,str);
        if(method=="C"){
            for(unsigned int i=0;i<str.length();i++){
                int c=1;
                while(str[i]==str[i+1]){
                    i++;
                    c++;
                }
                if(c!=1)
                    cout<<c<<str[i];
                else
                    cout<<str[i];
            }
        }
        else{
           for(unsigned int i=0;i<str.length();i++){
                int c=0;
                while(isdigit(str[i])){
                    c=c*10+str[i]-'0';
                    i++;
                }
                for(int j=0;j<c;j++){
                    cout<<str[i];
                }
                if(c==0)
                    cout<<str[i];
           }
        }
        return 0;
    }
