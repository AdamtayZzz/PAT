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
    int min,max;
    cin>>min>>max;
    int count=0;
    int k=0;
    bool flag=true;
    for(int i=1;i<=max;i++){
        int a;
        if(i==1)
            a=2;
        else if(i==2)
            a=3;
        else{
            if(flag){
                k++;
                a=6*k-1;
            }
            else{
                a=6*k+1;
            }
            flag=!flag;
        }
        if(i>=min){
            if(check(a)){
                cout<<a;
                count++;
                if(i!=max){
                    if(count%10==0)
                        cout<<'\n';
                    else
                        cout<<" ";
                }
            }
            else{
                i--;
            }
        }
        else{
            if(!check(a)){
                i--;
            }
        }
    }
    return 0;
}
