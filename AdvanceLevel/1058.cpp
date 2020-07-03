#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
    int a1,a2,a3,b1,b2,b3;
    scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
    int carry=0;
    int c1,c2,c3;
    c3= (a3+b3+carry)%29;
    carry = (a3+b3+carry)/29;
    c2= (a2+b2+carry)%17;
    carry = (a2+b2+carry)/17;
    c1= (a1+b1+carry);
    printf("%d.%d.%d",c1,c2,c3);
    return 0;
}
