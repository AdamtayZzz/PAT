    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    struct edge{
        int distance;
        int next;
    };
    int dis[501];
    bool marked[501];
    int cost[501];
    vector<int> route[501];
    vector<edge> city[501];
    int cmax,n,sp,m;
    vector<int> temp,path;
    int min_back=123123123,min_sent=123123123;
    void dfs(int v){
        temp.push_back(v);
        if(v==0){
            int b=0,s=0;
            for(int i=temp.size()-2;i>=0;i--){
                int id = temp[i];
                if(cost[id]-cmax/2>0){
                    b+=cost[id]-cmax/2;
                }
                else{
                    if(b>cmax/2-cost[id]){
                        b -= cmax/2-cost[id];
                    }
                    else{
                        s += cmax/2-cost[id]- b;
                        b=0;
                    }
                }
            }
            if(min_sent>s){
                min_sent = s;
                min_back = b;
                path = temp;
            }else if(min_sent ==s && min_back>b){
                min_back = b;
                path = temp;
            }
            temp.pop_back();
            return;
        }
        for(int i=0;i<route[v].size();i++){
            dfs(route[v][i]);
        }
        temp.pop_back();
    }
    int main()
    {
        cin>>cmax>>n>>sp>>m;
        for(int i=1;i<=n;i++){
            cin>>cost[i];
        }
        int start,endp;
        for(int i=0;i<m;i++){
            edge e;
            cin>>start>>endp;
            cin>>e.distance;
            e.next=endp;
            city[start].push_back(e);
            e.next=start;
            city[endp].push_back(e);
        }
        for(int i=0;i<=n;i++){
            dis[i]=-1;
            marked[i]=false;
        }
        int newP=0;
        dis[0]=0;
        marked[0]=true;
        for(int i=0;i<=n;i++){
            for(unsigned int j=0;j<city[newP].size();j++){
                int index = city[newP][j].next;
                if(marked[index]) continue;
                if(dis[index]==-1||dis[index]>dis[newP]+city[newP][j].distance){
                    route[index].clear();
                    route[index].push_back(newP);
                    dis[index] = dis[newP]+city[newP][j].distance;
                }
                else if(dis[index]==dis[newP]+city[newP][j].distance){
                        route[index].push_back(newP);
                }
            }
            int min_dis =123123123;
            for(int j=0;j<=n;j++){
                if(marked[j]) continue;
                if(dis[j]==-1) continue;
                if(dis[j]<min_dis){
                    min_dis=dis[j];
                    newP=j;
                }
            }
            marked[newP]=true;
            if(newP==sp)
                break;
        }
        dfs(sp);
        cout<<min_sent<<" 0";
        for(int i=path.size()-2;i>=0;i--){
            cout<<"->"<<path[i];
        }
        cout<<" "<<min_back;
        return 0;
    }
