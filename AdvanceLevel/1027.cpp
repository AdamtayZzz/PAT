    #include<iostream>
    #include<string>
    #include<algorithm>
    using namespace std;
    string convert(string num){
        int temp=stoi(num);
        int b2=13;
        string result="";
        for(int i=0;i<2;i++){
            if(temp%b2<10)
                result.insert(result.begin(),1,char(temp%b2+'0'));
            else
                result.insert(result.begin(),1,char(temp%b2-10+'A'));
            temp/=b2;
        }
        return result;
    }
    int main()
    {
        string r,g,b;
        cin>>r>>g>>b;
        string result="#";
        result+=convert(r);
        result+=convert(g);
        result+=convert(b);
        cout<<result;
        return 0;
    }
