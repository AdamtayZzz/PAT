#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b;
    double m=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        double temp=sqrt(a*a+b*b);
        if(temp>m)
            m=temp;
    }
    printf("%.2f",m);
    return 0;
}
