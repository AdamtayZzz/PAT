#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int a1,int a2){
    return a1>a2;}
int main()
{
   int num;
   cin>>num;
   vector<int> list(num);
   int cover[10000]={0};
   int flag=0;
   for(int i=0;i<num;i++){
        int a;
        cin>>a;
        list[i]=a;
        while(a!=1){
            if(a%2==0){
                a/=2;
            }
            else{
                a=(3*a+1)/2;
            }
            if(cover[a]==1)
                break;
            cover[a]=1;
        }
   }
    sort(list.begin(),list.end(),compare);
    for(unsigned int i=0;i<list.size();i++){
        if(cover[list[i]]==0){
            if (flag == 1)
                cout << " ";
            cout<<list[i];
            flag=1;
        }
    }
    return 0;
}
