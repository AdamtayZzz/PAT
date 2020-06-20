    #include<iostream>
    #include<cmath>
    using namespace std;
    bool check_prime(int c){
        if(c<=1)
            return false;
        for(int i=(int)sqrt(c*1.0);i>1;i--){
            if(c%i==0)
                return false;
        }
        return true;
    }

    int main()
    {
        int n,d;
        while(true){
            scanf("%d",&n);
            if(n<0)
                break;
            scanf("%d",&d);
            if(!check_prime(n)){
                printf("No\n");
                continue;
            }
            int c=0;
            while(n!=0){
                c+=(n%d);
                c*=d;
                n/=d;
            }
            c/=d;
            if(check_prime(c))
                printf("Yes\n");
            else
                printf("No\n");
        }
        return 0;
    }
