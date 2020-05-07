    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int n,p;
        cin>>n>>p;
        int num[n];
        for(int i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);
        int max_length=0;
        int max_num=1000000000/p;
        for(int i=0;i<n;i++){
            if(n-i<=max_length)
                break;
            int length;
            if(num[i]>max_num){
                length=n-i;
                if(length>max_length)
                    max_length=length;
                break;
            }
            int target=num[i]*p;
            for(int k=i+max_length;k<n;k++){
                if(num[k]<=target){
                    max_length++;
                }
                else{
                    break;
                }
            }
        }
        cout<<max_length;
        return 0;
    }
