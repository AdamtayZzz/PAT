    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    struct student{
        string id;
        int score;
        int final_rank;
        int location_num;
        int local_rank;
    };
    bool com(student a,student b){
        if(a.score>b.score){
            return true;
            }
        else if(a.score==b.score){
            return a.id<b.id;
        }
        else
            return false;
    }
    int main()
    {
        int n;
        cin>>n;
        vector<student> total;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<student> sub(m);
            string id;
            int score;
            for(int j=0;j<m;j++){
                cin>>id>>score;
                student s;
                s.id=id;
                s.score=score;
                s.location_num=i+1;
                sub.push_back(s);
            }
            sort(sub.begin(),sub.end(),com);
            int r = 1;
            int c = 0;
            for(int i=0;i<m;i++){
                student s =sub[i];
                if(i!=m-1&&sub[i].score==sub[i+1].score){
                    s.local_rank = r;
                    c++;
                }
                else if(i!=m-1&&sub[i].score!=sub[i+1].score){
                    s.local_rank = r;
                    r=r+c+1;
                    c=0;
                }
                else{
                    s.local_rank=r;
                }
                total.push_back(s);
            }
        }
        sort(total.begin(),total.end(),com);
        cout<<total.size()<<endl;
        bool flag=false;
        int r = 1;
        int c = 0;
        for(int i=0;i<total.size();i++){
                student s =total[i];
                if(i!=total.size()-1&&total[i].score==total[i+1].score){
                    s.final_rank = r;
                    c++;
                }
                else if(i!=total.size()-1&&total[i].score!=total[i+1].score){
                    s.final_rank = r;
                    r=r+c+1;
                    c=0;
                }
                else{
                    s.final_rank=r;
                }
                if(flag)
                    cout<<endl<<s.id<<" "<<s.final_rank<<" "<<s.location_num<<" "<<s.local_rank;
                else
                    cout<<s.id<<" "<<s.final_rank<<" "<<s.location_num<<" "<<s.local_rank;
                flag=true;
        }
        return 0;
    }
