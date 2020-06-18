    #include<iostream>
    #include<vector>
    using namespace std;
    typedef struct{
        int exp;
        float value;
    }item;
    int main()
    {
        vector<float> result(2001);
        int a,b;
        cin>>a;
        vector<item> num1(a);
        for(int j=0;j<a;j++){
            item t;
            cin>>t.exp>>t.value;
            num1[j]=t;
        }
        cin>>b;
        vector<item> num2(b);
        for(int j=0;j<b;j++){
            item t;
            cin>>t.exp>>t.value;
            num2[j]=t;
        }
        int e;
        float n;
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++){
            e= num1[i].exp+num2[j].exp;
            n = num1[i].value*num2[j].value;
            result[e]+=n;
        }
        int c=0;
        for(int i=2001;i>=0;i--){
            if(result[i])
                c++;
        }
        printf("%d",c);
        for(int i=2001;i>=0;i--){
            if(result[i])
                printf(" %d %.1f",i,result[i]);
        }
        return 0;
    }
