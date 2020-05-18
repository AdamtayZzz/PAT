#include<iostream>
#include<set>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>k;
        int c=0;
        while(k!=0){
            c+=k%10;
            k/=10;
        }
        s.insert(c);
    }
    bool flag=true;
    cout<<s.size()<<endl;
    for(set<int>::iterator iter=s.begin();iter!=s.end();iter++){
        if(flag){
            cout<<*iter;
            flag=false;
        }
        else{
            cout<<" "<<*iter;
            flag=false;
        }
    }
    return 0;
}
