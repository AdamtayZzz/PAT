#include <iostream>
using namespace std;
int main() {
    int a[100001];
    int n,t;
    scanf("%d",&n);
    int cnt=n-1; //未在正确位置的数目
    int cost=0; //交换次数
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        a[t]=i;
        if(a[t]==t&&t!=0)
            cnt--;
    }
    int unsorted=1; //找未在正确的下标
    while(cnt>0){
        if(a[0]==0){
            while(unsorted == a[unsorted])
                unsorted++;
            swap(a[0],a[unsorted]);
            cost++;
        }
        swap(a[0],a[a[0]]);
        cnt--;
        cost++;
    }
    printf("%d",cost);
    return 0;
}
