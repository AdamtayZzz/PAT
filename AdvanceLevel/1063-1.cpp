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
    set<int> result1,result2;
    for(int i=0;i<m;i++){
        scanf("%d %d",&s,&e);
        result1.clear();result2.clear();
        set_intersection(num[s].begin(),num[s].end(),num[e].begin(),num[e].end(),inserter(result1,result1.begin()));
        set_union(num[s].begin(),num[s].end(),num[e].begin(),num[e].end(),inserter(result2,result2.begin()));
        printf("%.1f\%\n",(float)result1.size()*100/result2.size());
    }
}
