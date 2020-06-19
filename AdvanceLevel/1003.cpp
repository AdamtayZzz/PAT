    #include<iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        int n,m,c1,c2;
        cin>>n>>m>>c1>>c2;
        bool marked[501];
        int dis[501];
        int team_count[501];
        int team[501];
        int num[501];
        vector<edge> city_map[501];
        for(int i=0;i<n;i++){
            cin>>team[i];
        }
        int s,e,d;
        for(int i=0;i<m;i++){
            cin>>s>>e>>d;
            edge new_edge;
            new_edge.dis=d;
            new_edge.next=e;
            city_map[s].push_back(new_edge);
            new_edge.next=s;
            city_map[e].push_back(new_edge);
        }
        //最短路径生成D算法
        //初始化
        for(int i=0;i<n;i++){
            marked[i]=false;
            dis[i]=-1;
            num[i]=0;
            team_count[i]=team[i];
        }
        marked[c1]=true;
        team_count[c1]=team[c1];
        dis[c1]=0;
        num[c1]=1;
        int newP=c1;
        //循环生成
        for(int i=1;i<n;i++){
            for(unsigned int j=0;j<city_map[newP].size();j++){
                int index = city_map[newP][j].next;
                if(marked[index]) continue;
                if(dis[index]==-1||dis[index]>dis[newP]+city_map[newP][j].dis){
                        dis[index] = dis[newP]+city_map[newP][j].dis;
                        team_count[index]=team[index]+team_count[newP];
                        num[index]=num[newP];
                   }
                else if(dis[index]==dis[newP]+city_map[newP][j].dis){
                    num[index] = num[newP]+num[index];
                    //newP到j是确定的，引入的是c1到newP的可能次数
                    if(team_count[index]<team[index]+team_count[newP]){
                        dis[index] = dis[newP]+city_map[newP][j].dis;
                        team_count[index]=team[index]+team_count[newP];
                    }
                }
            }
            int min_dis = 123123123;
            for(int j=0;j<n;j++){
                if(marked[j]) continue;
                if(dis[j]==-1) continue;
                if(dis[j]<min_dis){
                    min_dis = dis[j];
                    newP=j;
                }
            }
            marked[newP]=true;
            if(newP==c2)
                break;
        }
        cout<<num[c2]<<" "<<team_count[c2];
        return 0;
    }
