#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    vector<vector<string>> v;
    for(int i = 0; i < 3; i++) {
        string s;
        getline(cin, s);
        vector<string> row;
        int j = 0, k = 0;
        while(j < s.length()) {
            if(s[j] == '[') {
                while(k++ < s.length()) {
                    if(s[k] == ']') {
                        row.push_back(s.substr(j+1, k-j-1));
                        break;
                    }
                }
            }
            j++;
        }
        v.push_back(row);
    } //找出所有的表情符号
    int n;
    cin>>n;
    int x1,x2,x3,x4,x5;
    for(int i=0;i<n;i++){
        cin>>x1>>x2>>x3>>x4>>x5;
        if(x1>v[0].size()||x2>v[1].size()||x3>v[2].size()||x4>v[1].size()||x5>v[0].size()||x1<1||x2<1||x3<1||x4<1||x5<1){
            cout<<"Are you kidding me? @\\/@";
        }
        else{
            cout<<v[0][x1-1]<<"("<<v[1][x2-1]<<v[2][x3-1]<<v[1][x4-1]<<")"<<v[0][x5-1];
        }
        if(i!=n-1)
            cout<<endl;
    }
    return 0;
}