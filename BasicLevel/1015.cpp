#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
typedef struct{
    int id;
    int score1;
    int score2;
}person;
bool compare(person p1,person p2){
    int total1=p1.score1+p1.score2;
    int total2=p2.score1+p2.score2;
    if(total1>total2)
        return true;
    else if(total1==total2){
        if(p1.score1>p2.score1)
            return true;
        else if(p1.score1==p2.score1){
            return p1.id<p2.id;
        }
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int n,l,h;
    scanf("%d %d %d",&n,&l,&h);
    vector<person> c1;
    vector<person> c2;
    vector<person> c3;
    vector<person> c4;
    int count=0;
    while(n>0){
        person p;
        scanf("%d %d %d",&p.id,&p.score1,&p.score2);
        count++;
        if(p.score1>=h&&p.score2>=h)
            c1.push_back(p);
        else if(p.score1>=h&&p.score2>=l)
            c2.push_back(p);
        else if(p.score1>=l&&p.score2>=l){
            if(p.score1>=p.score2)
                c3.push_back(p);
            else
                c4.push_back(p);
        }
        else
            count--;
        n--;
    }
    printf("%d\n",count);
    sort(c1.begin(),c1.end(),compare);
    sort(c2.begin(),c2.end(),compare);
    sort(c3.begin(),c3.end(),compare);
    sort(c4.begin(),c4.end(),compare);
    for(vector<person>::iterator it=c1.begin();it!=c1.end();it++){
        printf("%d %d %d",(*it).id,(*it).score1,(*it).score2);
        if(--count>0)
            printf("\n");
    }
    for(vector<person>::iterator it=c2.begin();it!=c2.end();it++){
        printf("%d %d %d",(*it).id,(*it).score1,(*it).score2);
        if(--count>0)
            printf("\n");
    }
    for(vector<person>::iterator it=c3.begin();it!=c3.end();it++){
        printf("%d %d %d",(*it).id,(*it).score1,(*it).score2);
        if(--count>0)
            printf("\n");
    }
    for(vector<person>::iterator it=c4.begin();it!=c4.end();it++){
        printf("%d %d %d",(*it).id,(*it).score1,(*it).score2);
        if(--count>0)
            printf("\n");
    }
    return 0;
}
