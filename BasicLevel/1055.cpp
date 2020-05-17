#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct{
    string name;
    int height;
}student;
bool compare(student student1,student student2){
    if(student1.height!=student2.height)
        return student1.height>student2.height;
    else
        return student1.name<student2.name;
}
int main() {
    int n,k;
    cin>>n>>k;
    string name;
    int height;
    vector<student> v(n);
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>height;
        v[i].name=name;
        v[i].height=height;
    }
    sort(v.begin(),v.end(),compare);
    int t=0;
    for(int i=0;i<k;i++){
        int m;
        if(i==0){ //最后一排，要包括最后多余的人数
            m=n-(k-1)*n/k;
        }
        else{
            m=n/k;
        }
        vector<student> row(m);
        row[m/2]=v[t];
        int index=m/2-1;
        for(int j=t+1;j<t+m;j=j+2){
            row[index--]=v[j];
        }
        index=m/2+1;
        for(int j=t+2;j<t+m;j=j+2){
            row[index++]=v[j];
        }
        for(int j=0;j<m;j++){
            cout<<row[j].name;
            if(j!=m-1)
                cout<<" ";
        }
        if(i!=k-1)
            cout<<endl;
        t=t+m;
    }
    return 0;
}
