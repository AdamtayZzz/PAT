#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    int N,M;
    cin>>N>>M;
    int object;
    for(int i=0;i<M;i++){
        cin>>object;
        s.insert(object);
    }
    int c_person=0,c_object=0;
    set<int>::iterator iter;
    string name;
    int n;
    for(int i=0;i<N;i++){
        cin>>name>>n;
        int c=0;
        for(int j=0;j<n;j++){
            cin>>object;
            iter = s.find(object);
            if(iter!=s.end()){
                if(c==0){
                    cout<<name;
                    printf(": %04d",object);}
                else
                    printf(" %04d",object);
                c++;
                }
        }
        if(c!=0){
            c_person+=1;
            c_object+=c;
            cout<<endl;
            }
    }
    cout<<c_person<<" "<<c_object;
    return 0;
}
