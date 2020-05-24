#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    sort(l.begin(),l.end());
    int total=l[0];
    for(int i=1;i<l.size();i++){
        total=(total+l[i])/2;
    }
    cout<<total;
    return 0;
}
