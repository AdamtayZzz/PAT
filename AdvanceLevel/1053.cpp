#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> weight;
int tree[101]={0};
vector<int> path;
vector<vector<int>> result;
int total=0;
int n,m,s;
bool check_leaf_node(int root){
    for(int i=0;i<n;i++){
        if(tree[i]==root){
            return false;
        }
    }
    return true;
}
bool com(vector<int> a,vector<int> b){
    int i=0,j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]==b[i]){
            i++;j++;
        }
        else{
            return a[i]>=b[i];
        }
    }
    return false;
}
void dfs(int root){
    path.push_back(weight[root]);
    total+=weight[root];
    if(total == s&&check_leaf_node(root)){
        result.push_back(path);
        path.pop_back();
        total-=weight[root];
        return;
    }
    for(int i=0;i<n;i++){
        if(tree[i]==root){
            dfs(i);
        }
    }
    path.pop_back();
    total-=weight[root];
    return;
}
int main(void){
    scanf("%d %d %d",&n,&m,&s);
    int w;
    for(int i=0;i<n;i++){
        scanf("%d",&w);
        weight.push_back(w);
    }
    tree[0]=-1;
    int id,k,sub_id;
    for(int i=0;i<m;i++){
        scanf("%d %d",&id,&k);
        for(int j=0;j<k;j++){
            scanf("%d",&sub_id);
            tree[sub_id]=id;
        }
    }
    dfs(0);
    sort(result.begin(),result.end(),com);
    for(int i=0;i<result.size();i++){
        bool flag= false;
        for(int j=0;j<result[i].size();j++){
            if(flag)
                printf(" ");
            printf("%d",result[i][j]);
            flag=true;
        }
        printf("\n");
    }
    return 0;
}
