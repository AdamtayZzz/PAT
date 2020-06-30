#include<iostream>
#include<map>
using namespace std;
int main(void){
    int m,n;
    scanf("%d %d",&m,&n);
    map<int,int> map_;
    int c;
    int half=m*n/2;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&c);
            if(map_.count(c))
                map_[c]+=1;
            else
                map_[c]=1;
            if(map_[c]>half){
                printf("%d",c);
                return 0;
            }
        }
    }
    return 0;
}
