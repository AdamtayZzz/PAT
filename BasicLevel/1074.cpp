#include<iostream>
#include<string>
using namespace std;
int main() {
    string t,str1,str2;
    getline(cin,t);
    getline(cin,str1);
    getline(cin,str2);
    if(t.length()!=str1.length())
        str1.insert(str1.begin(),t.length()-str1.length(),'0');
    if(t.length()!=str2.length())
        str2.insert(str2.begin(),t.length()-str2.length(),'0');
    int carry=0;
    int d,op1,op2;
    string result="";
    for(int i=t.length()-1;i>=0;i--){
        op1=str1[i]-'0';op2=str2[i]-'0';d=t[i]-'0';
        if(d==0)
            d=10;
        int k=(op1+op2+carry)%d;
        carry =(op1+op2+carry)/d;
        result.insert(result.begin(),1,k+'0');
    }
    if(carry!=0)
        result.insert(result.begin(),1,carry+'0');;
    int index=0;
    bool mark=false;
    for(int i=0;i<result.length();i++){
        if(result[i]!='0'){
            index=i;
            mark=true;
            break;
        }
    }
    if(mark)
        for(int i=index;i<result.length();i++){
            cout<<result[i];
        }
    else
        cout<<0;
    return 0;
}
