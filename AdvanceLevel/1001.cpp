    #include<iostream>
    #include<stdio.h>
    #include<math.h>
    #include<stack>
    using namespace std;
    int main()
    {
        int a,b;
        cin>>a>>b;
        a = a + b;
        bool mark=false;
        if(a<0) mark=true;
        a = abs(a);
        if(a==0){
            printf("0");
            return 0;
        }
        stack<int> s;
        int k=0;
        while(a!=0){
            k=a%1000;
            a=a/1000;
            s.push(k);
        }
        if(mark)
            printf("-");
        bool flag=false;
        while(!s.empty()){
            if(flag){
                printf(",");
                printf("%03d",s.top());
                s.pop();
            }
            else{
                printf("%d",s.top());
                s.pop();
                flag=true;
            }
        }
        return 0;
    }
