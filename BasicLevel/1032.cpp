    #include<iostream>
    #include<map>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        map<int,int> m;
        int team,score;
        while(n>0){
            cin>>team>>score;
            if(m.count(team)){
                map<int,int>::iterator iter=m.find(team);
                m[team]=score+iter->second;
            }
            else{
                m[team]=score;
            }
            n--;
        }
        int max_team=0,max_score=0;
        for(map<int,int>::iterator iter=m.begin();iter!=m.end();iter++){
            if(iter->second>max_score){
                max_team=iter->first;
                max_score=iter->second;
            }
        }
        cout<<max_team<<" "<<max_score;
        return 0;
    }
