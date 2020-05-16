#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int c=0;
    for(unsigned int i=0;i<str.size();i++){
        if(isupper(str[i])){
            c+=str[i]-'A'+1;
        }
        else if(islower(str[i])){
            c+=str[i]-'a'+1;
        }
        else
            continue;
    }
    int c0=0;
    int c1=0;
    while(c!=0){
        if(c%2==1)
            c1++;
        else
            c0++;
        c/=2;
    }
    cout<<c0<<" "<<c1;
    return 0;
}
