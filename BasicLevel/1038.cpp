    #include<iostream>
    #include<map>
    using namespace std;
    int main()
    {
        map<int,int> m;
        int n;
        cin>>n;
        int num;
        while(n>0){
            cin>>num;
            if(m.count(num)){
                map<int,int>::iterator iter=m.find(num);
                iter->second+=1;
            }
            else{
                m.insert(pair<int,int>(num,1));
            }
            n--;
        }
        cin>>n;
        while(n>0){
            cin>>num;
            if(m.count(num)){
                map<int,int>::iterator iter=m.find(num);
                cout<<iter->second;
            }
            else{
                cout<<"0";
            }
            if(n!=1)
                cout<<" ";
            n--;
        }
        return 0;
    }
