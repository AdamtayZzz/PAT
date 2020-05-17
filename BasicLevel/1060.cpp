#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool com(int a,int b){
    return a>b;
}
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),com);
    int i=0;
    int c=0;
    while(i<n){
        if(v[i]>i+1)
            c++;
        i++;
    }
    cout<<c;
    return 0;
}
