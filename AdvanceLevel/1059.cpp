#include<iostream>
#include<vector>
using namespace std;
bool mark[100001];
vector<int> prime;
int times[100001]={0};
void filter(){
    for(int i=0;i<=100000;i++){
        mark[i]=false;
    }
    for(int i=2;i<=100000;i++){
        if(mark[i]==true)
            continue;
        prime.push_back(i);
        if(i>=1000) continue;
        for(int j=i*i;j<=100000;j+=i){
            mark[j]=true;
        }
    }
}
int main(void){
    long int num;
    cin>>num;
    if(num==1){
        cout<<"1=1";
        return 0;
    }
    long int temp=num;
    filter();
    for(int i=0;i<prime.size();i++){
        int count_=0;
        int cur=prime[i];
        while(num%cur==0){
            count_++;
            num/=cur;
        }
        times[cur]=count_;
    }
    cout<<temp<<"=";
    bool flag=false;
    for(int i=0;i<100000;i++){
        if(times[i]>1){
            if(flag==true){
                cout<<"*";
            }
            cout<<i<<"^"<<times[i];
            flag=true;
        }
        else if(times[i]==1){
            if(flag==true){
                cout<<"*";
            }
            cout<<i;
            flag=true;
        }
        else
            continue;
    }
    if(num!=1)
        cout<<"*"<<num;
    return 0;
}
