#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct product{
    float storage;
    float price;
    float avg;
};
bool com(product a,product b){
    return a.avg>b.avg;
}
int main() {
    int n,d;
    scanf("%d %d",&n,&d);
    vector<product> p(n);
    for(int i=0;i<n;i++){
        scanf("%f",&p[i].storage);
    }
    for(int i=0;i<n;i++){
        scanf("%f",&p[i].price);
    }
    for(int i=0;i<n;i++){
        p[i].avg=(p[i].price)/(p[i].storage);
    }
    sort(p.begin(),p.end(),com);
    int index=0;
    float result=0;
    while(d>0&&index<n){
        if(d>=p[index].storage){
            result+=p[index].price;
            d-=p[index].storage;
            index++;
        }
        else{
            result+=d*(p[index].avg);
            d=0;
        }
    }
    printf("%.2f",result);
    return 0;
}
