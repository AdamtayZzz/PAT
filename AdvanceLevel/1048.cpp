    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int n,target;
        cin>>n>>target;
        vector<int> l(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        int s=0,e=n-1;
        sort(l.begin(),l.end());
        while(s<e){
            if(l[s]+l[e]<target){
                s++;
            }
            else if(l[s]+l[e]>target){
                e--;
            }
            else{
                cout<<l[s]<<" "<<l[e];
                return 0;
            }
        }
        cout<<"No Solution";
        return 0;
    }
