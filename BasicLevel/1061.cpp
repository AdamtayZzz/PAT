#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> score(m);
    vector<int> result(m);
    for(int i=0;i<m;i++){
        cin>>score[i];
    }
    for(int i=0;i<m;i++){
        cin>>result[i];
    }
    int answer;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            cin>>answer;
            if(answer==result[j])
                c+=score[j];
        }
        cout<<c;
        if(i!=n-1)
            cout<<endl;
    }
    return 0;
}
