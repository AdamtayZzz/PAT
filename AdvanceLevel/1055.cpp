#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct person{
    string name;
    int age;
    int worth;
};
bool com(person a,person b){
    if(a.worth==b.worth){
        if(a.age==b.age){
            return a.name<=b.name;
        }
        else{
            return a.age<=b.age;
        }
    }
    else{
        return a.worth>=b.worth;
    }

}
int main(void){
    int n,k;
    cin>>n>>k;
    vector<person> l(n);
    int count_num[201]={0};
    vector<person> s;
    for(int i=0;i<n;i++){
        cin>>l[i].name>>l[i].age>>l[i].worth;
    }
    sort(l.begin(),l.end(),com);
    for(int i=0;i<n;i++){
        if(count_num[l[i].age]<100){
            s.push_back(l[i]);
            count_num[l[i].age]++;
        }
    }
    int num,max_age,min_age;
    for(int i=1;i<=k;i++){
        cin>>num>>min_age>>max_age;
        cout<<"Case #"<<i<<":"<<endl;
        int c=0;
        for(int j=0;j<s.size();j++){
            if(c>=num)
                break;
            if(s[j].age>=min_age&&s[j].age<=max_age){
                cout<<s[j].name<<" "<<s[j].age<<" "<<s[j].worth<<endl;
                c++;
            }
        }
        if(c==0)
            cout<<"None"<<endl;
    }
    return 0;
}
