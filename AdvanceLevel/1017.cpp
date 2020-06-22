    #include<iostream>
    #include<vector>
    #include<queue>
    #include<algorithm>
    using namespace std;
    struct client{
        int client_id;
        int window_id;
        int start_time;
        int end_time;
        friend bool operator<(client a,client b){
            if(a.end_time != b.end_time)
                return a.end_time > b.end_time;
            else
                return a.window_id > b.window_id;
        }
    };
    struct info{
        int last;
        int arrive;
    };
    bool com(info a,info b){
        return a.arrive<b.arrive;
    }
    int main()
    {
        priority_queue<client> Q;
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int> curTime(k); //记录当前个窗口时间
        for(int i=0;i<k;i++)
            curTime[i]=8*3600;
        int h,m,s,t;
        vector<info> clients(n);
        for(int i=0;i<n;i++){
            scanf("%d:%d:%d %d",&h,&m,&s,&t);
            info new_info;
            new_info.arrive = h*3600+m*60+s;
            new_info.last = t*60;
            clients[i]=new_info;
        }
        sort(clients.begin(),clients.end(),com);
        //上面的没问题*
        int id;
        int total_wait=0;
        int count_num=0;
        for(id=1;id<=n&&id<=k;id++){
            info in = clients[id-1];
            client c;
            c.client_id  = id;
            if(in.arrive>=17*3600+1)
                break;
            if(in.arrive<curTime[(id-1)%k]){
                total_wait += curTime[(id-1)%k]-in.arrive;
                c.end_time = curTime[(id-1)%k]+ in.last;
                }
            else{
                total_wait+=0;
                c.end_time = in.arrive+in.last;
                }
            count_num++;
            c.window_id=(id-1)%k;
            curTime[(id-1)%k]=c.end_time;
            Q.push(c);
        }
        while(!Q.empty()){
            client c = Q.top();
            Q.pop();
            if(id<=n){
                info in = clients[id-1];
                if(in.arrive>=17*3600+1)
                    break;
                client c2;
                c2.client_id=id;
                if(in.arrive<curTime[c.window_id]){
                    total_wait += curTime[c.window_id]-in.arrive;
                    c2.end_time = curTime[c.window_id]+ in.last;
                    }
                else{
                    total_wait+=0;
                    c2.end_time = in.arrive+ in.last;
                }
                count_num++;
                c2.window_id=c.window_id;
                curTime[c.window_id]=c2.end_time;
                Q.push(c2);
                id++;
            }
        }
        printf("%.1f",total_wait*1.0/(60*count_num));
        return 0;
    }
