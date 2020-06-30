#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(void){
    int m,n,k;
    cin>>m>>n>>k;
    for(int i=0;i<k;i++){
        stack<int> s;
        vector<int> l(n+1);
        for(int j=1;j<=n;j++){
            cin>>l[j];
        }
        int index=1;
        bool flag=false;
        for(int j=1;j<=n;j++){
            s.push(j);
            if(s.size()>m)
                break;
            while(!s.empty()&&s.top()==l[index]){
                s.pop();
                index++;
            }
        }
        if(index==n+1) flag= true;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
