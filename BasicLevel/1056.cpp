#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int c=0;
    int k=0;
    for(int i=0;i<n;i++){
        cin>>k;
        c+=(k*10+k)*(n-1);
    }
    cout<<c;
    return 0;
}
