#include<cstdio>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    double v[n];
    for(int i=0;i<n;i++){
        double k;
        scanf("%lf",&k);
        v[i]=k;
    }
    double count_=0.0;
    for(int i=0;i<n;i++){
        count_ = count_+v[i]*(n-i)*(i+1);
    }
    printf("%.2f",count_);
    return 0;
}
