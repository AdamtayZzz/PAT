#include <iostream>
#include<string>
using namespace std;

int main()
{
    char list[10]={'0','1','2','3','4','5','6','7','8','9'};
    string result;
    int num;
    cin>>num;
    int count=0;
    while(num!=0){
        int temp=num%10;
        if(count==0){
            for(int i=temp;i>0;i--)
                result.insert(0,1,list[i]);
        }
        else if(count==1){
            result.insert(0,temp,'S');
        }
        else{
            result.insert(0,temp,'B');
        }
        count++;
        num/=10;
    }
    cout<<result;
    return 0;
}
