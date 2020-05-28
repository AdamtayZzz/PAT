    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        int d,n;
        cin>>d>>n;
        string str;
        str+=char(d+'0');
        for(int i=1;i<n;i++){
            string temp;
            for(unsigned int j=0;j<str.size();j++){
                int c=1;
                while(j+1<str.size()&&str[j]==str[j+1]){
                    c++;
                    j++;
                }
                temp+=str[j];
                temp+=to_string(c);
            }
            str=temp;
        }
        cout<<str;
        return 0;
    }
