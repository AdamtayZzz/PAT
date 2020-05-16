#include<iostream>
#include<string>
using namespace std;
bool check(string str){
    int c=0;
    int mark=0;
    for(unsigned int i=0;i<str.size();i++){
        if(isdigit(str[i])||str[i]=='-')
            continue;
        else if(str[i]=='.'){
            c++;
            mark=i;}
        else
            return false;
    }
    if(c>1)
        return false;
    else if(c==1&&str.size()-1-mark>2)
        return false;
    else
        return true;
}
int main() {
    int n;
    cin>>n;
    string str;
    int c=0;
    double t=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(!check(str))
            cout<<"ERROR: "<<str<<" is not a legal number"<<endl;
        else{
            double temp=atof(str.c_str());
            if(temp>1000||temp<-1000)
                cout<<"ERROR: "<<str<<" is not a legal number"<<endl;
            else{
                t+=temp;
                c++;
            }
        }
    }
    if(c==0)
        cout<<"The average of 0 numbers is Undefined";
    else if(c==1){
        printf("The average of 1 numbers is %.2f",t);
    }
    else{
        printf("The average of %d numbers is %.2f",c,t/c);
    }
    return 0;
}
