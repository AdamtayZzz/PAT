#include<iostream>
using namespace std;
int main()
{
    int r1=0,r2=0,r4=0,r5=0,n,num;
    int a=1;
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    cin>>n;
    while(n>0){
        cin>>num;
        if(num%5==0){
            if(num%2==0){
                r1+=num;
                c1++;
            }
        }
        else if(num%5==1){
            r2+= a*num;
            a*=-1;
            c2++;
        }
        else if(num%5==2){
            c3++;
        }
        else if(num%5==3){
            r4+=num;
            c4++;
        }
        else{
            r5= (num>r5)?num:r5;
            c5++;
        }
        n--;
    }
    if(c1==0)
        cout<<"N ";
    else
        cout<<r1<<" ";
    if(c2==0)
        cout<<"N ";
    else
        cout<<r2<<" ";
    if(c3==0)
        cout<<"N ";
    else
        cout<<c3<<" ";
    if(c4==0)
        cout<<"N ";
    else{
        printf("%.1f ",(float)r4/c4);}
    if(c5==0)
        cout<<"N";
    else
        cout<<r5;
    return 0;
}
