#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m,n,a,b,t;
    cin>>m>>n>>a>>b>>t;
    int v[m][n]={0};
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>v[i][j];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j!=0)
                cout<<" ";
            if(v[i][j]>=a&&v[i][j]<=b)
                printf("%03d",t);
            else
                printf("%03d",v[i][j]);
        }
        if(i!=m-1)
            cout<<endl;
    }
    return 0;
}
