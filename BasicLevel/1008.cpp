#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   int num;
   cin>>num;
   int position;
   cin>>position;
   position = position%num;
   vector<int> list(num);
   for(int i=0;i<num;i++){
        int a;
        cin>>a;
        list[i]=a;
   }
    reverse(list.begin(),list.end());
    reverse(list.begin(),list.begin()+position);
    reverse(list.begin()+position,list.end());
    int flag=0;
    for(unsigned int i=0;i<list.size();i++){
            if (flag == 1)
                cout << " ";
            cout<<list[i];
            flag=1;
    }
    return 0;
}
