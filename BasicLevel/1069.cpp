#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int M,N,S;
    cin>>M>>N>>S;
    if(M<S)
        cout<<"Keep going...";
    else{
        getchar();
        set<string> winners;
        string participant;
        int c=0;
        set<string>::iterator iter;
        for(int i=1;i<=M;i++){
            getline(cin,participant);
            if(i>=S){
                if(c==0){
                    iter = winners.find(participant);
                    if(iter==winners.end()){
                        winners.insert(participant);
                        c = (c+1)%N;
                        cout<<participant;
                        if(i+N<=M)
                            cout<<endl;
                    }
                }
                else{
                    c=(c+1)%N;
                }
            }
        }
    }
    return 0;
}
