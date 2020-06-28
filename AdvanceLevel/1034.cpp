    #include<iostream>
    #include<map>
    #include<vector>
    #include<algorithm>
    using namespace std;
    map<string,int> m1;
    map<int,string> m2;
    int time_all[2001];
    int graph[2001][2001]={0};
    int c=1;
    bool marked[2001]={false};
    int tree_weight=0,member_num=0,max_time=0,max_id;
    void dfs(int node){
        marked[node]=true;
        member_num++;
        if(max_time<time_all[node]){
            max_id = node;
            max_time = time_all[node];
        }
        for(int i=1;i<c;i++){
            if(graph[node][i]>0){
                tree_weight+=graph[node][i];
                graph[node][i]=0;
                graph[i][node]=0;
                if(marked[i]!=true)
                    dfs(i);
            }
        }
    }
    struct result{
        string name;
        int num;
    };
    bool com(result a,result b){
        return a.name<b.name;
    }
    int main()
    {
        int n,k;
        cin>>n>>k;
        string name1,name2;
        int t;
        for(int i=0;i<n;i++){
            cin>>name1>>name2>>t;
            if(!m1.count(name1)){
                m1[name1]=c;
                m2[c]=name1;
                time_all[c]=t;
                c++;
            }
            else{
                time_all[m1[name1]]+=t;
            }
            if(!m1.count(name2)){
                m1[name2]=c;
                m2[c]=name2;
                time_all[c]=t;
                c++;
            }
            else{
                time_all[m1[name2]]+=t;
            }
            graph[m1[name1]][m1[name2]]+=t;
            graph[m1[name2]][m1[name1]]+=t;
        }
        int valid=0;
        vector<result> f;
        for(int i=1;i<c;i++){
            tree_weight=0,member_num=0,max_time=0;
            if(marked[i]) continue;
            dfs(i);
            if(member_num>2&&tree_weight>k){
                valid++;
                result r;
                r.name=m2[max_id];
                r.num = member_num;
                f.push_back(r);
            }
        }
        sort(f.begin(),f.end(),com);
        cout<<valid<<endl;
        for(int i=0;i<f.size();i++){
            cout<<f[i].name<<" "<<f[i].num<<endl;
        }
        return 0;
    }
