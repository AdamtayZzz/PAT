 #include<iostream>
 #include<vector>
 using namespace std;
 bool marked[10001]={false};
 vector<int> tree[10001];
 void check(int root){
    marked[root]=true;
    for(int i=0;i<tree[root].size();i++){
        if(marked[tree[root][i]]!=true){
            check(tree[root][i]);
        }
    }
 }
int dfs(int root){
    int deepest=1;
    int cur;
    for(int i=0;i<tree[root].size();i++){
        if(marked[tree[root][i]]!=true){
            marked[tree[root][i]]=true;
            cur=dfs(tree[root][i])+1;
            if(cur>deepest)
                deepest=cur;
            marked[tree[root][i]]=false;
        }
    }
    return deepest;
 }
 int main(){
    int n;
    cin>>n;
    int s,e;
    for(int i=1;i<=n-1;i++){
        cin>>s>>e;
        tree[s].push_back(e);
        tree[e].push_back(s);
    }
    //检查是否唯一树
    int total=0;
    for(int i=1;i<=n;i++){
        if(marked[i]!=true){
            check(i);
            total++;
        }
    }
    if(total!=1){
        cout<<"Error: "<<total<<" components";
        return 0;
    }
    for(int i=1;i<=n;i++){
        marked[i]=false;
    }
    //若是树则生成最深结点
    vector<int> result;
    int deepest=1;
    int cur;
    for(int i=1;i<=n;i++){
        marked[i]=true;
        cur=dfs(i);
        marked[i]=false;
        if(cur>deepest){
            result.clear();
            result.push_back(i);
            deepest=cur;
        }
        else if(cur==deepest)
            result.push_back(i);
        else
            continue;
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i];
        if(i!=result.size()-1)
            cout<<endl;
    }
    return 0;
 }
