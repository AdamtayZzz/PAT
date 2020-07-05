#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int inorder[1001];
int tree[1001];
int t=1;
void dfs(int root){
    if(root>n)
        return;
    dfs(root*2);
    tree[root] = inorder[t++];
    dfs(root*2+1);
}
int main(void){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>inorder[i];
    }
    sort(inorder+1,inorder+n+1);
    dfs(1);
    for(int i=1;i<=n;i++){
        if(i!=1)
            cout<<" ";
        cout<<tree[i];
    }
    return 0;
}
