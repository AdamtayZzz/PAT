    #include<cstdio>
    #include<math.h>
    using namespace std;
    int main()
    {
        int total;
        char target;
        scanf("%d %c",&total,&target);
        int n=3;
        int count_=1;
        while(true){
            count_+=2*n;
            if(count_>total){
                count_-=2*n;
                n-=2;
                break;
            }
            n+=2;
        }
        for(int i=n;i>=1;i=i-2){
            for(int j=0;j<(n-i)/2;j++)
                printf(" ");
            for(int j=0;j<i;j++)
                printf("%c",target);
            printf("\n");
        }
        for(int i=3;i<=n;i=i+2){
            for(int j=0;j<(n-i)/2;j++)
                printf(" ");
            for(int j=0;j<i;j++)
                printf("%c",target);
            printf("\n");
        }
        printf("%d",total-count_);
        return 0;
    }
