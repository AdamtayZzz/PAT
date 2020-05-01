#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    vector<string> result;
    int start=0;
    for(unsigned int end=0;end<str.size();end++){
        if(str[end]==' '){
            result.push_back(str.substr(start,end-start));
            start=end+1;
        }
        else
            continue;
    }
    result.push_back(str.substr(start));
    int flag=0;
    for(vector<string>::reverse_iterator iter=result.rbegin();iter!=result.rend();iter++){
        if(flag==0)
            cout<<*iter;
        else
            cout<<" "<<*iter;
        flag=1;
    }
    return 0;
}
