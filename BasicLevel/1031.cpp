    #include<iostream>
    #include<string>
    #include<vector>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
        char p[11]={'1','0','X','9','8','7','6','5','4','3','2'};
        vector<string> result;
        string id;
        int total=0;
        while(n>0){
            cin>>id;
            bool flag=true;
            int c=0;
            for(int i=0;i<17;i++){
                if(isdigit(id[i])){
                    c+=w[i]*(id[i]-'0');
                }
                else{
                    flag=false;
                    total+=1;
                    break;
                }
            }
            if(!flag)
                result.push_back(id);
            else{
                int k=c%11;
                if(id[17]!=p[k]){
                    result.push_back(id);
                    total+=1;
                }
            }
            n--;
        }
        if(total==0)
            cout<<"All passed";
        else{
            for(vector<string>::iterator it=result.begin();it!=result.end();it++){
                    cout<<*it;
                    if(it+1!=result.end())
                        cout<<endl;
                }
        }
        return 0;
    }
