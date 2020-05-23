#include<iostream>
#include<string>
using namespace std;
int main() {
    string pw;
    int N;
    cin>>pw>>N;
    getchar();
    string input;
    for(int i=0;i<N;i++){
        getline(cin,input);
        if(input=="#")
            break;
        if(input!=pw){
            cout<<"Wrong password: "<<input<<endl;
            if(i==N-1)
                cout<<"Account locked";
            }
        else{
            cout<<"Welcome in";
            break;
        }
    }
    return 0;
}
