    #include<iostream>
    #include<string>
    #include<map>
    using namespace std;
    typedef struct{
        string id;
        int seat1;
        int seat2;
    }student;
    int main()
    {
        int n;
        cin>>n;
        student s[n];
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>s[i].id>>s[i].seat1>>s[i].seat2;
            m[s[i].seat1]=i;
        }
        int k,seat,index;
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>seat;
            index=m[seat];
            cout<<s[index].id<<" "<<s[index].seat2;
            if(i!=k-1) cout<<endl;
        }
        return 0;
    }
