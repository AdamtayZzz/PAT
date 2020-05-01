#include<iostream>
using namespace std;
int main()
{
    int n;
    long long a,b,c;
    cin>>n;
    for(int index=1;index<=n;index++){
        cin>>a>>b>>c;
        bool mark=(a+b)>c?true:false;
        if(!mark)
            cout<<"Case #"<<index<<": false"<<endl;
        else
            cout<<"Case #"<<index<<": true"<<endl;
    }
    return 0;
}
