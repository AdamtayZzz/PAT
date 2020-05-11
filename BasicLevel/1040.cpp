    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string str1;
        getline(cin,str1);
        int count_p=0;
        int count_t=0;
        int count_=0;
        for(unsigned int i=0;i<str1.size();i++){
            char c=str1[i];
            if(c=='T')
                count_t++;
        }
        for(unsigned int i=0;i<str1.size();i++){
            char c=str1[i];
            if(c=='A')
                count_=(count_+(count_p*count_t)%1000000007)%1000000007;
            else if(c=='P')
                count_p+=1;
            else
                count_t-=1;
        }
        cout<<count_;
        return 0;
    }
