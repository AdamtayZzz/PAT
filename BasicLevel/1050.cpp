#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main() {
    int t;
    cin>>t;
    // sort
    vector<int> num(t);
    for(int i=0;i<t;i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end(),compare);
    // m,n
    int n = (sqrt((double)t));
    int m;
    for(int i=n;i>=1;i--)
        if(t%i==0){
            m=t/i;
            n=i;
            break;
        }
    // result
    vector<vector<int>> r(m,vector<int>(n));
    // compute
    int c=0;
    int level=m/2+m%2;
    for(int i=0;i<level;i++){
        for(int j=i;j<=n-1-i&&c<t;j++)
            r[i][j]=num[c++];
        for(int j=i+1;j<=m-2-i&&c<t;j++)
            r[j][n-1-i]=num[c++];
        for(int j=n-1-i;j>=i&&c<t;j--)
            r[m-1-i][j]=num[c++];
        for(int j=m-2-i;j>=i+1&&c<t;j--)
            r[j][i]=num[c++];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<r[i][j];
            if(j!=n-1)
                cout<<" ";
        }
        if(i!=m-1)
            cout<<endl;
    }
    return 0;
}
