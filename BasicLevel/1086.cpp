    #include<iostream>
    using namespace std;
    int main()
    {
        int a,b;
        cin>>a>>b;
        int result=0;
        int t=a*b;
        while(t!=0){
            int s=t%10;
            t/=10;
            result=result*10+s;
        }
        cout<<result;
        return 0;
    }
