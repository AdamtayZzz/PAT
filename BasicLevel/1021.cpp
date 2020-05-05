    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string num;
        cin>>num;
        int result[10]={0,0,0,0,0,0,0,0,0,0};
        int max_=0;
        for(unsigned int i=0;i<num.size();i++){
            char c=num[i];
            result[c-'0']+=1;
            if(c-'0'>max_)
                max_=c-'0';
        }
        for(int i=0;i<10;i++){
            if(result[i]!=0){
                cout<<i<<":"<<result[i];
                if(i!=max_){
                    cout<<endl;}
                else{
                    break;}
            }
            else
                continue;
        }
        return 0;
    }
