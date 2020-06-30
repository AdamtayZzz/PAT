#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(void){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    set<char> s;
    for(int i=0;i<b.size();i++){
        s.insert(b[i]);
    }
    for(int j=0;j<a.size();j++){
        if(s.count(a[j]))
            continue;
        else
            cout<<a[j];
    }
    return 0;
}
