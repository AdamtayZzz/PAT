#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string result="";
    string str1,str2,str3,str4;
    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str3);
    getline(cin,str4);
    unsigned int index=0;
    int count=0;
    vector<string> day ={"MON ","TUE ","WED ","THU ","FRI ","SAT ","SUN "};
    while(index<str1.size()&&index<str2.size()){
        if(count==0&&str1[index]==str2[index]&&str1[index]<='G'&&str1[index]>='A'){
            result+=day[str1[index]-'A'];
            count++;
            index++;
            continue;
        }
        if(count==1&&str1[index]==str2[index]){
            if(isdigit(str1[index])){
                result+= "0";
                result+= to_string(str1[index]-'0');}
            else if(str1[index]<='N'&&str1[index]>='A'){
                result+= to_string(str1[index]-'A'+10);}
            else{
                index++;
                continue;
            }
            break;
        }
        index++;
    }
    result+=":";
    index=0;
    while(index<str3.size()&&index<str4.size()){
        if(isalpha(str3[index])&&str3[index]==str4[index]){
            if(index<10)
                result+="0";
            result+= to_string(index);
            break;
        }
        index++;
    }
    cout<<result;
    return 0;
}
