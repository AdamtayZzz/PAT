#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
    int start;
    int value;
    int next;
};
bool com(node a,node b){
    return a.value<b.value;
}
int main(void){
    int n,start;
    cin>>n>>start;
    node linkedList[100001];
    int add,v,next;
    for(int i=0;i<n;i++){
        cin>>add>>v>>next;
        linkedList[add].start=add;
        linkedList[add].value=v;
        linkedList[add].next=next;
    }
    vector<node> f;
    while(start!=-1){
        f.push_back(linkedList[start]);
        start=linkedList[start].next;
    }
    sort(f.begin(),f.end(),com);
    if(f.size()!=0)
        printf("%d %05d\n",f.size(),f[0].start);
    else{
        printf("0 -1");
        return 0;
    }
    for(int i=0;i<f.size();i++){
        printf("%05d %d ",f[i].start,f[i].value);
        if(i!=f.size()-1){
            printf("%05d\n",f[i+1].start);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}
