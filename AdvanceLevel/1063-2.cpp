#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(void){
    int n,k,v;
    scanf("%d",&n);
    vector<set<int>> num(n+1);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&v);
            num[i].insert(v);
        }
    }
    int m,s,e;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&s,&e);
        int nc = 0,nt = num[e].size();
        for(set<int>::iterator iter=num[s].begin();iter!=num[s].end();iter++){
            if(num[e].find(*iter)==num[e].end()){
                nt++;
            }
            else
                nc++;
        }
        printf("%.1f\%\n",(float)nc*100/nt);
    }
}
