#include<cstdio>
#include<map>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    map<int,int> m;
    int team,id,score;
    for(int i=0;i<n;i++){
        scanf("%d-%d %d",&team,&id,&score);
        if(m.count(team)){
            map<int,int>::iterator iter=m.find(team);
            iter->second+=score;
        }
        else
            m[team]=score;
    }
    int max_team,max_score=0;
    for(map<int,int>::iterator iter=m.begin();iter!=m.end();iter++){
        if(iter->second>max_score){
            max_team=iter->first;
            max_score=iter->second;
        }
    }
    printf("%d %d",max_team,max_score);
    return 0;
}
