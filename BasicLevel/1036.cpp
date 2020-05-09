    #include<cstdio>
    #include<math.h>
    using namespace std;
    int main()
    {
        int length;
        char c;
        scanf("%d %c",&length,&c);
        int height = round((float)length/2);
        for(int i=0;i<height;i++){
            if(i==0||i==height-1){
                for(int i=0;i<length;i++)
                    printf("%c",c);
            }
            else{
                printf("%c",c);
                for(int i=0;i<length-2;i++)
                    printf(" ");
                printf("%c",c);
            }
            if(i!=height-1)
                printf("\n");
        }
        return 0;
    }
