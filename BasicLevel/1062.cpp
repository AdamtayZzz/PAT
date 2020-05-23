#include<iostream>
using namespace std;
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int main() {
    int N1,M1,N2,M2,K;
    scanf("%d/%d %d/%d %d",&N1,&M1,&N2,&M2,&K);
    float min_=double(N1*K)/M1;
    float max_=double(N2*K)/M2;
    if(min_>max_){
        float temp=min_;
        min_=max_;
        max_=temp;
    }
    bool mark=false;
    int t;
    if((max_-int(max_))==0)
        t=int(max_)-1;
    else
        t=int(max_);
    for(int i=int(min_)+1;i<=t;i++){
        if(gcd(i,K)==1){
        if(mark)
            printf(" %d/%d",i,K);
        else
            printf("%d/%d",i,K);
        mark=true;
        }
    }
    return 0;
}
