    #include<iostream>
    #include<string>
    #include<vector>
    using namespace std;
    int main()
    {
        string str;
        cin>>str;
        vector<string> l ={"zero","one","two","three","four","five","six","seven","eight","nine"};
        int c=0;
        for(int i=0;i<str.length();i++){
            c+=str[i]-'0';
        }
        if(c==0){
            cout<<"zero";
            return 0;
        }
        string result;
        while(c!=0){
            int k=c%10;
            c/=10;
            if(c!=0)
                result = " "+l[k]+result;
            else
                result = l[k]+result;
        }
        cout<<result;
        return 0;
    }
