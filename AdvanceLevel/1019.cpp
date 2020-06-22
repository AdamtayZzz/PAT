    #include<iostream>
    #include<algorithm>
    #include<vector>
    using namespace std;
    int main()
    {
        int n,b;
        cin>>n>>b;
        int temp=n;
        int t=0;
        while(n!=0){
            n/=b;
            t++;
        }
        vector<int> l(t);
        vector<int> s(t);
        for(int i=0;i<t;i++){
            l[i]=temp%b;
            s[i]=temp%b;
            temp/=b;
        }
        reverse(l.begin(),l.end());
        bool flag=true;
        for(int i=0;i<t;i++){
            if(s[i]!=l[i])
                flag=false;
        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
        for(int i=0;i<t;i++){
            if(i==0)
                printf("%d",l[i]);
            else
                printf(" %d",l[i]);
        }
        return 0;
    }
