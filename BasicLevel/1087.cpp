    #include<iostream>
    #include<set>
    using namespace std;
    int main()
    {
        int N;
        cin>>N;
        set<int> s;
        for(int i=1;i<=N;i++){
            int t=i/2+i/3+i/5;
            s.insert(t);
        }
        cout<<s.size();
        return 0;
    }
