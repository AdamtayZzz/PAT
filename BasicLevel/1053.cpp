#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int p1=0,p2=0;
    int N,D;
    float e;
    cin>>N>>e>>D;
    for(int j=0;j<N;j++){
        int K;
        cin>>K;
        float num;
        int c=0;
        for(int i=0;i<K;i++){
            cin>>num;
            if(num<e)
                c++;
        }
        if(c>K/2)
            K>D?p2++:p1++;
    }
    printf("%.1f%% %.1f%%",100*float(p1)/N,100*float(p2)/N);
    return 0;
}
