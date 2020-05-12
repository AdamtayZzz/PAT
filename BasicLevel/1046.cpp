#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a1,a2,b1,b2;
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        cin>>a1>>a2>>b1>>b2;
        if(a1+b1==a2&&a1+b1==b2)
            continue;
        else if(a1+b1==a2){
            c1++;
        }
        else if(a1+b1==b2){
            c2++;
        }
        else
            continue;
    }
    cout<<c2<<" "<<c1;
    return 0;
}
