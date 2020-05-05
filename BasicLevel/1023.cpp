    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string result;
        int n;
        bool flag=true;
        for(int i=0;i<10;i++){
            cin>>n;
            if(n>0){
            if(i!=0&&flag){
                result.insert(result.begin(),1,(char)i+'0');
                if(n>1)
                    result.insert(result.end(),n-1,(char)i+'0');
                flag=false;
            }
            else{
                result.insert(result.end(),n,(char)i+'0');
            }
            }
        }
        cout<<result;
        return 0;
    }
