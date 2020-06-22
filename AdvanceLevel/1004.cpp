    #include<iostream>
    #include<vector>
    #include<queue>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int n,m;
        scanf("%d %d",&n,&m);
        vector<int> tree(n+1,-1);
        int id,k,id_sub;
        for(int i=0;i<m;i++){
            scanf("%d %d",&id,&k);
            for(int i=0;i<k;i++){
                scanf("%d",&id_sub);
                tree[id_sub] = id;
            }
        }
        queue<int> q;
        q.push(1);
        bool flag=false;
        while(!q.empty()){
            int s =q.size();
            int total=0;
            for(int i=0;i<s;i++){
                int parent = q.front();
                q.pop();
                int c=0;
                for(int j=1;j<=n;j++){
                    if(tree[j]==parent){
                        q.push(j);
                        c++;
                    }
                }
                if(c==0)
                    total+=1;
                else
                    continue;
            }
            if(flag)
                printf(" %d",total);
            else
                printf("%d",total);
            flag=true;
        }
        return 0;
    }
