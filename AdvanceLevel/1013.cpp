    #include<iostream>
    #include<vector>
    using namespace std;
    vector<int> tree(1001);
    int find_head(int node){
        if(tree[node]==-1)
            return node;
        int head = find_head(tree[node]);
        tree[node]=head;
        return head;
    }
    int main()
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int city[m][2]={0};
        int s,e;
        for(int i=0;i<m;i++){
            scanf("%d %d",&s,&e);
            city[i][0]=s;
            city[i][1]=e;
        }
        int numRemove;
        int a,b;
        for(int i=0;i<k;i++){
            scanf("%d",&numRemove);
            for(int i=1;i<=n;i++)
                tree[i]=-1;
            for(int i=0;i<m;i++){
                if(city[i][0]!=numRemove&&city[i][1]!=numRemove){
                    a= find_head(city[i][0]);
                    b= find_head(city[i][1]);
                    if(a!=b)
                        tree[b]=a;

                }
            }
            int c=0;
            for(int i=1;i<=n;i++){
                if(i!=numRemove&&tree[i]==-1)
                    c++;
            }
            if(i!=0)
                printf("\n");
            printf("%d",c-1);
        }
        return 0;
    }
