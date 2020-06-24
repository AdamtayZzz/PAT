    #include<iostream>
    #include<stack>
    using namespace std;
    struct node{
        int next;
        char c;
    };
    int main()
    {
        node address[100000];
        int start1,start2,n;
        scanf("%d %d %d",&start1,&start2,&n);
        int s;
        for(int i=0;i<n;i++){
            node node_new;
            scanf("%d %c %d",&s,&node_new.c,&node_new.next);
            address[s]=node_new;
        }
        int start=start1;
        bool flag[100000]={false};
        while(start!=-1){
            flag[start]=true;
            start = address[start].next;
        }
        start = start2;
        while(start!=-1){
            if(flag[start]){
                printf("%05d",start);
                break;
            }
            else
                start = address[start].next;
        }
        if(start==-1)
            printf("-1");
        return 0;
    }
