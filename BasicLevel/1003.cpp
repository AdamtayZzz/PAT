#include <iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string str;
        cin>>str;
        bool mark=true;
        for(unsigned int j=0;j<str.size();j++){
            if(str[j]!='P'&&str[j]!='A'&&str[j]!='T'){
                cout<<"NO"<<endl;
                mark=false;
                break;
            }
        }
        if(!mark)
            continue;
        int before=0,mid=0,after=0,index=0;
        while(str[index]!='P'){
            before++;
            index++;
        }
        index++;
        while(str[index]!='T'){
            mid++;
            index++;
        }
        if(mid==0){
            cout<<"NO"<<endl;
            continue;
        }
        after = int(str.size())-index-1;
        while(mid!=1){
            after-=before;
            mid--;
        }
        if(after!=before)
            cout<<"NO"<<endl;
        else
             cout<<"YES"<<endl;
    }
    return 0;
}
