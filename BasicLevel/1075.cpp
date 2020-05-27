    #include<cstdio>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int start,n,k;
        scanf("%d %d %d",&start,&n,&k);
        int place1[100005],place2[100005],place3[100005],data[100005],next[100005];
        int address,value,pointer;
        for(int i=0;i<n;i++){
            scanf("%d %d %d",&address,&value,&pointer);
            data[address]=value;
            next[address]=pointer;
        }
        int c1=0,c2=0,c3=0;
        while(start!=-1){
            if(data[start]<0){
                place1[c1++]=start;
            }
            else if(data[start]<=k){
                place2[c2++]=start;
            }
            else{
                place3[c3++]=start;
            }
            start=next[start];
        }
        for(int i=0;i<c1;i++){
            if(i!=c1-1)
                printf("%05d %d %05d\n",place1[i],data[place1[i]],place1[i+1]);
            else {
                if(c2!=0)
                    printf("%05d %d %05d\n",place1[i],data[place1[i]],place2[0]);
                else if(c2==0&&c3!=0)
                    printf("%05d %d %05d\n",place1[i],data[place1[i]],place3[0]);
                else
                    printf("%05d %d -1",place1[i],data[place1[i]]);
            }
        }
        for(int i=0;i<c2;i++){
            if(i!=c2-1)
                printf("%05d %d %05d\n",place2[i],data[place2[i]],place2[i+1]);
            else {
                if(c3!=0)
                    printf("%05d %d %05d\n",place2[i],data[place2[i]],place3[0]);
                else
                    printf("%05d %d -1",place2[i],data[place2[i]]);
            }
        }
        for(int i=0;i<c3;i++){
            if(i!=c3-1)
                printf("%05d %d %05d\n",place3[i],data[place3[i]],place3[i+1]);
            else {
                printf("%05d %d -1",place3[i],data[place3[i]]);
            }
        }
        return 0;
    }
