#include <iostream>
#include<string>
using namespace std;

int main()
{
    string transfer[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string num;
    cin>>num;
    int count=0;
    int index=0;
    string result[3];
    for(unsigned int i=0;i<num.size();i++){
        count+=(num[i]-48);
    }
    while(count!=0){
        result[index++]=transfer[count%10];
        count/=10;
    }
    while(true){
        index--;
        cout << result[index];
        if(index!=0)
            cout << " ";
        else
            break;
    }
    return 0;
}
