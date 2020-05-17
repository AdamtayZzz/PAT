#include<iostream>
#include<map>
#include<cmath>
#include<string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string id;
    map<string,int> m;
    for(int i=1;i<=n;i++){
        cin>>id;
        if(i==1)
            m[id]=0;
        else if(i==2||i==3)
            m[id]=1;
        else{
            int t = int(sqrt(i));
            bool flag=true;
            while(t>1){
                if(i%t==0)
                    flag=false;
                t--;
            }
            if(!flag)
                m[id]=2;
            else
                m[id]=1;
        }
    }
    int g;
    scanf("%d",&g);
    int t[10000]={0};
    for(int i=0;i<g;i++){
        cin>>id;
        int id_int=stoi(id);
        if(t[id_int]==0){
            if(m.count(id)){
                map<string,int>::iterator iter = m.find(id);
                cout<<id<<": ";
                if(iter->second==0)
                    cout<<"Mystery Award";
                else if(iter->second==1)
                    cout<<"Minion";
                else
                    cout<<"Chocolate";
                t[id_int]=1;
            }
            else
                cout<<id<<": "<<"Are you kidding?";
        }
        else{
            cout<<id<<": Checked";
        }
        if(i!=g-1)
            cout<<endl;

    }
    return 0;
}
