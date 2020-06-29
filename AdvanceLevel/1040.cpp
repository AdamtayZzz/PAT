    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string str;
        getline(cin,str);
        int max_length=1;
        int dp[1000];
        dp[0]=1;
        int k;
        for(int i=1;i<str.size();i++){
            k=dp[i-1];
            if(i-k-1>=0&&str[i]==str[i-k-1])
                dp[i]=dp[i-1]+2;
            else if(str[i]==str[i-k])
                dp[i]=dp[i-1]+1;
            else
                dp[i]=1;
            if(dp[i]>max_length)
                max_length=dp[i];
        }
        cout<<max_length;
        return 0;
    }
