#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string str1,str2;
    cin>>str1>>str2;
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    unsigned int index=0;
    string result="";
    if(str2.size()<str1.size()){
        str2.append(str1.size()-str2.size(),'0');
    }
    while(index<str1.size()&&index<str2.size()){
        char c1=str1[index];
        char c2=str2[index];
        if(index%2==0){
            int k = c1-'0' + c2-'0';
            k=k%13;
            if(k==10)
                result.insert(0,1,'J');
            else if(k==11)
                result.insert(0,1,'Q');
            else if(k==12)
                result.insert(0,1,'K');
            else
                result.insert(0,1,k+'0');
        }
        else{
            int k = c2-'0'-(c1-'0');
            if(k<0)
                k+=10;
            result.insert(0,1,k+'0');
        }
        index++;
    }
    for(unsigned int i=index;i<str2.size();i++)
        result.insert(0,1,str2[i]);
    cout<<result;
    return 0;
}
