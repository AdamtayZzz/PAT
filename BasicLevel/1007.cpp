#include<iostream>
#include<math.h>
using namespace std;
bool check(int a){
    double s=sqrt(a);
    for(int i=2;i<=s;i++){
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int k=1;
    if(n<5){
        cout<<0;
        return 0;
    }
    int count=1;
    while(6*k+1<n){
        int a=6*k-1;
        int b=6*k+1;
        if(check(a)&&check(b))
            count++;
        k++;
    }
    cout<<count;
    return 0;
}
