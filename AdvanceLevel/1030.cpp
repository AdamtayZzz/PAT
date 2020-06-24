    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<stack>
    using namespace std;
    struct edge{
        int distance;
        int cost;
        int next;
    };
    int main()
    {
        int n,m,s,d;
        int dis[501];
        bool marked[501];
        int cost[501];
        int route[501];
        vector<edge> city[501];
        cin>>n>>m>>s>>d;
        int start,endp;
        for(int i=0;i<m;i++){
            edge e;
            cin>>start>>endp;
            cin>>e.distance>>e.cost;
            e.next=endp;
            city[start].push_back(e);
            e.next=start;
            city[endp].push_back(e);
        }
        for(int i=0;i<n;i++){
            dis[i]=-1;
            cost[i]=0;
            route[i]=-1;
            marked[i]=false;
        }
        int newP=s;
        route[s]=-1;
        dis[s]=0;
        marked[s]=true;
        for(int i=0;i<n;i++){
            for(unsigned int j=0;j<city[newP].size();j++){
                int index = city[newP][j].next;
                if(marked[index]) continue;
                if(dis[index]==-1||dis[index]>dis[newP]+city[newP][j].distance){
                    route[index]=newP;
                    dis[index] = dis[newP]+city[newP][j].distance;
                    cost[index] = cost[newP]+city[newP][j].cost;
                }
                else if(dis[index]==dis[newP]+city[newP][j].distance){
                    if(cost[index] > cost[newP]+city[newP][j].cost){
                        route[index] = newP;
                        cost[index]= cost[newP]+city[newP][j].cost;
                    }
                }
            }
            int min_dis =123123123;
            for(int j=0;j<n;j++){
                if(marked[j]) continue;
                if(dis[j]==-1) continue;
                if(dis[j]<min_dis){
                    min_dis=dis[j];
                    newP=j;
                }
            }
            marked[newP]=true;
            if(newP==d)
                break;
        }
        int k=d;
        stack<int> final_route;
        while(k!=-1){
            final_route.push(k);
            k=route[k];
        }
        while(!final_route.empty()){
            k=final_route.top();
            cout<<k<<" ";
            final_route.pop();
        }
        cout<<dis[d]<<" "<<cost[d];
        return 0;
    }
