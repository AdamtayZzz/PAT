    #include<cstdio>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int start,n,k;
        scanf("%d %d %d",&start,&n,&k);
        int place[100005],data[100005],next[100005];
        int address,value,pointer;
        for(int i=0;i<n;i++){
            scanf("%d %d %d",&address,&value,&pointer);
            data[address]=value;
            next[address]=pointer;
        }
        int sum=0;
        while(start!=-1){
            place[sum++]=start;
            start=next[start];
        }
        int c=sum/k;
        for(int i=0;i<c;i++){
            reverse(place+i*k,place+(i+1)*k);
        }
        for(int i=0;i<sum;i++){
            printf("%05d %d ",place[i],data[place[i]]);
            if(i!=sum-1)
                printf("%05d\n",place[i+1]);
            else
                printf("-1");
        }
        return 0;
    }
