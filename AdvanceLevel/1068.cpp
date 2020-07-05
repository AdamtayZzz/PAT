#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dp[10010][110], w[10010];
bool choice[10010][110];
int cmp1(int a, int b){return a > b;}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
        scanf("%d", &w[i]);
    sort(w + 1, w + n + 1, cmp1);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m ; j++) {
            if(j>=w[i]){
                if(dp[i-1][j] <= dp[i-1][j-w[i]] + w[i]) {
                    choice[i][j] = true;
                    dp[i][j] = dp[i-1][j-w[i]] + w[i];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }

        }
    }
    if(dp[n][m] != m) printf("No Solution");
    else {
        vector<int> arr;
        int v = m, index = n;
        while(v > 0) {
            if(choice[index][v] == true) {
                arr.push_back(w[index]);
                v -= w[index];
            }
            index--;
        }
        for(int i = 0; i < arr.size(); i++) {
            if(i != 0) printf(" ");
            printf("%d", arr[i]);
        }
    }
    return 0;
}
