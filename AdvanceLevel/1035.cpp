 #include<iostream>
 #include<string>
 #include<queue>
 using namespace std;
 struct info{
    string name;
    string pw;
 };
 int main(){
    int n;
    cin>>n;
    string name,str;
    int c=0;
    queue<info> q;
    for(int i=0;i<n;i++){
        cin>>name>>str;
        bool flag=false;
        for(int j=0;j<str.size();j++){
            if(str[j]=='1'){
                str[j]='@';
                flag=true;
            }else if(str[j]=='0'){
                str[j]='%';
                flag=true;
            }
            else if(str[j]=='l'){
                str[j]='L';
                flag=true;
            }
            else if(str[j]=='O'){
                str[j]='o';
                flag=true;
            }
            else
                continue;
        }
        if(flag){
            info info_new;
            info_new.name = name;
            info_new.pw = str;
            q.push(info_new);
            c++;
        }
    }
    if(c==0&&n==1)
        cout<<"There is 1 account and no account is modified";
    else if(c==0&&n>1)
        cout<<"There are "<<n<<" accounts and no account is modified";
    else{
        cout<<c<<endl;
        while(!q.empty()){
            info infomation = q.front();
            q.pop();
            cout<<infomation.name<<" "<<infomation.pw<<endl;
        }
    }
    return 0;
 }
