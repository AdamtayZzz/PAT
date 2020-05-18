#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> marriage(100000,-1);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        marriage[a]=b;
        marriage[b]=a;
    }
    int m;
    cin>>m;
    vector<int> v(m);
    vector<int> result;
    for(int i=0;i<m;i++)
        cin>>v[i];
    for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++){
        int t=*iter;
        int p=marriage[t];
        if(p==-1)
            result.push_back(t);
        else if(find(v.begin(),v.end(),p)==v.end())
            result.push_back(t);
        else{
            continue;
        }
    }
    sort(result.begin(),result.end());
    if(result.size()!=0){
        cout<<result.size()<<endl;
        for(vector<int>::iterator iter=result.begin();iter!=result.end();iter++){
            if(iter!=result.begin())
                cout<<" ";
            printf("%05d",*iter);
        }
    }
    else
        cout<<"0";
    return 0;
}
