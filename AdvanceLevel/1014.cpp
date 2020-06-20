    #include<iostream>
    #include<vector>
    #include<queue>
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
    int main()
    {
        priority_queue<client> Q;
        int n,m,k,q;
        cin>>n>>m>>k>>q;
        vector<int> start(k+1); //起始时间
        vector<int> result(k+1); //记录最终结果
        vector<int> curTime(n); //记录当前个窗口时间
        int id;
        for(id=1;id<=k&&id<=m*n;id++){
            client c;
            c.client_id  = id;
            cin>>c.end_time;
            c.start_time = curTime[(id-1)%n];
            c.end_time+=curTime[(id-1)%n];
            c.window_id=(id-1)%n;
            curTime[(id-1)%n]=c.end_time;
            Q.push(c);
        }
        while(!Q.empty()){
            client c = Q.top();
            start[c.client_id]=c.start_time;
            result[c.client_id]=c.end_time;
            Q.pop();
            if(id<=k){
                client c2;
                c2.client_id=id;
                cin>>c2.end_time;
                c2.start_time = curTime[c.window_id];
                c2.end_time+=curTime[c.window_id];
                curTime[c.window_id]=c2.end_time;
                c2.window_id = c.window_id;
                id++;
                Q.push(c2);
            }
        }
        int g,time,time_s;
        for(int i=0;i<q;i++){
            cin>>g;
            time_s=start[g];
            time= result[g];
            if(time_s>=540)
                cout<<"Sorry";
            else{
                printf("%02d:%02d",time/60+8,time%60);
            }
            if(i!=q-1)
                cout<<endl;
        }
        return 0;
    }
