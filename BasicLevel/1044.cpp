    #include<iostream>
    #include<string>
    using namespace std;
    string list1[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string list2[13]={"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    void convert_mars(string str){
        int num = stoi(str);
        int a=num%13;
        int b=num/13;
        if(b!=0){
            cout<<list2[b];
            if(a!=0)
                cout<<" "<<list1[a];
        }
        else
            cout<<list1[a];
    }
    void convert_earth(string str){
        int index=0;
        for(unsigned int i=0;i<str.size();i++){
            if(str[i]==' ')
                index=i;
        }
        string str1,str2;
        if(index){
            str1=str.substr(0,index);
            str2=str.substr(index+1);
        }
        else
            str1=str;
        int c1=0,c2=0;
        for(int i=0;i<13;i++){
            if(list1[i]==str1||list1[i]==str2)
                c2=i;
            if(list2[i]==str1)
                c1=i;
        }
        cout<<c1*13+c2;
    }
    int main()
    {
        int n;
        cin>>n;
        getchar();
        string str;
        while(n>0){
            getline(cin,str);
            if(isdigit(str[0]))
                convert_mars(str);
            else
                convert_earth(str);
            if(n--!=1)
                cout<<endl;
        }
        return 0;
    }
