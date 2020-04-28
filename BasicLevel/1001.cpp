#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int count =0;
    while(a!=1){
        if(a%2==0){
            a/=2;
        }
        else{
            a=(3*a+1)/2;
        }
        count++;
    }
    cout << count;
    return 0;
}
