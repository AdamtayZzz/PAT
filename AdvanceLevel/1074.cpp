#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
struct node {
    int s;
    int v;
    int e;
};
int main() {
    int start,n,k;
    cin>>start>>n>>k;
    int address[100000];
    int next[100000];
    vector<node> linkedlist;
    int add,value,nex;
    for(int i=0;i<n;i++){
        cin>>add>>value>>nex;
        address[add]=value;
        next[add]=nex;
    }
    int j=0;
    while(start!=-1){
        node new_node;
        new_node.s=start;
        new_node.v=address[start];
        new_node.e=next[start];
        start=next[start];
        linkedlist.push_back(new_node);
        j++;
    }
    for(int i=0;i<j;i+=k){
        if(i+k<=j){
            reverse(linkedlist.begin()+i,linkedlist.begin()+i+k);}
    }
    for(int i=0;i<j;i++){
        printf("%05d %d ",linkedlist[i].s,linkedlist[i].v);
        if(i!=j-1)
            printf("%05d\n",linkedlist[i+1].s);
        else
            cout<<"-1";
    }
    return 0;
}
