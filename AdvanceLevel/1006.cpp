    #include<iostream>
    #include<string>
    #include<algorithm>
    #include<vector>
    using namespace std;
    typedef struct{
        string id;
        string start_time;
        string end_time;
    }record;
    bool com1(record record1,record record2){
        return record1.start_time<record2.start_time;
    }
    bool com2(record record1,record record2){
        return record1.end_time>record2.end_time;
    }
    int main()
    {
        int m;
        cin>>m;
        vector<record> l(m);
        for(int i=0;i<m;i++){
            cin>>l[i].id>>l[i].start_time>>l[i].end_time;
        }
        sort(l.begin(),l.end(),com1);
        cout<<l[0].id<<" ";
        sort(l.begin(),l.end(),com2);
        cout<<l[0].id;
        return 0;
    }
