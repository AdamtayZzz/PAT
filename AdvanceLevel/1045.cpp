    #include<iostream>
    #include<cmath>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int dp[10001][201];
    int main()
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> color(k+1);
        for(int i=1;i<=k;i++){
            cin>>color[i];
        }
        int k2;
        cin>>k2;
        vector<int> strip(k2+1);
        for(int i=1;i<=k2;i++){
            cin>>strip[i];
        }
        for(int i=0;i<=k;i++)
            dp[0][i]=0;
        for(int i=0;i<=k2;i++)
            dp[i][0]=0;
        for(int i=1;i<=k2;i++){
            for(int j=1;j<=k;j++){
                if(color[j]==strip[i])
                    dp[i][j]= max(dp[i-1][j],dp[i-1][j-1])+1;
                else
                    dp[i][j]= max(max(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
             }
        }
        cout<<dp[k2][k];
        return 0;
    }
