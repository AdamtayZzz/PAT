    #include<iostream>
    #include<algorithm>
    #include<string>
    using namespace std;
    bool compare1(char a,char b){
        return a<=b;
    }
    bool compare2(char a,char b){
        return a>=b;
    }
    int main()
    {
        string num;
        cin>>num;
        num.insert(0,4-num.size(),'0');
        while(true){
            string up=num,down=num;
            sort(up.begin(),up.end(),compare1);
            sort(down.begin(),down.end(),compare2);
            int u=stoi(up,nullptr);
            int d=stoi(down,nullptr);
            num = to_string(d-u);
            num.insert(0,4-num.size(),'0');
            cout<<down<<" - "<<up<<" = "<<num;
            if(num!="6174"&&num!="0000")
                cout<<endl;
            else
                break;
        }
        return 0;
    }
