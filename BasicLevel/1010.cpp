#include<iostream>
using namespace std;
int main()
{
   int a;
   int n;
   int flag=0;
   while(cin>>a>>n){
    if(n>0){
        if(flag==0){
            cout<<a*n<<" "<<n-1;
            flag=1;}
        else{
            cout<<" "<<a*n<<" "<<n-1;
            }
        }
    else
        break;
    }
    if(flag==0)
        cout<<"0 0";
    return 0;
}
