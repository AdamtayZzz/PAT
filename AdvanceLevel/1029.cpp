    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<cmath>
    using namespace std;
    int main()
    {
        int n1,n2;
        scanf("%d",&n1);
        vector<int> list1(n1);
        for(int i=0;i<n1;i++){
            scanf("%d",&list1[i]);
        }
        scanf("%d",&n2);
        vector<int> list2(n2);
        for(int i=0;i<n2;i++){
            scanf("%d",&list2[i]);
        }
        int mid_index=ceil((n1+n2)*1.0/2);
        int c;
        int index1=0,index2=0;
        int temp;
        for(c=1;c<=mid_index&&index1<n1&&index2<n2;c++){
            if(list1[index1]<=list2[index2]){
                temp = list1[index1++];
            }
            else{
                temp = list2[index2++];
            }
            if(c==mid_index){
                printf("%d",temp);
                return 0;
            }
        }
        while(c<=mid_index){
            if(index1<n1)
                temp = list1[index1++];
            else
                temp = list2[index2++];
            c++;
        }
        printf("%d",temp);
        return 0;
    }
