#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    int num1,num2;
    cin>>str1>>num1>>str2>>num2;
    int result1=0;
    int result2=0;
    for(unsigned int i=0;i<str1.size();i++){
        if(str1[i]-'0'==num1){
            result1*=10;
            result1+=num1;
        }
    }
    for(unsigned int i=0;i<str2.size();i++){
        if(str2[i]-'0'==num2){
            result2*=10;
            result2+=num2;
        }
    }
    cout<<(result1+result2);
    return 0;
}
