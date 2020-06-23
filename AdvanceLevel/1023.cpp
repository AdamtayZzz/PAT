    #include<iostream>
    #include<map>
    #include<string>
    #include<algorithm>
    using namespace std;
    int main()
    {
        map<int,int> c;
        string num;
        cin>>num;
        int carry=0;
        string result="";
        reverse(num.begin(),num.end());
        for(int i=0;i<num.size();i++){
            c[num[i]-'0'] +=1;
            int temp = carry + 2*(num[i]-'0');
            result.insert(result.begin(),1,char(temp%10+'0'));
            carry =temp/10;
        }
        if(carry==1)
            result.insert(result.begin(),1,char(carry%10+'0'));
        for(int i=0;i<result.size();i++){
            c[result[i]-'0'] -=1;
        }
        bool flag=true;
        for(map<int,int>::iterator iter=c.begin();iter!=c.end();iter++){
            if(iter->second!=0)
                flag=false;
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        cout<<result;
        return 0;
    }
