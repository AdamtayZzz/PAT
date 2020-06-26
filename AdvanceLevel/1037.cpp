 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 bool com(int a,int b){
    return a>b;
 }
 int main(){
    long long int total=0;
    int n1,n2;
    cin>>n1;
    vector<int> coupon(n1);
    int pc=0,pp=0,nc=0,np=0;
    for(int i=0;i<n1;i++){
        cin>>coupon[i];
        if(coupon[i]>0)
            pc++;
        else if(coupon[i]<0)
            nc++;
    }
    cin>>n2;
    vector<int> product(n2);
    for(int i=0;i<n2;i++){
        cin>>product[i];
        if(product[i]>0)
            pp++;
        else  if(product[i]<0)
            np++;
    }
    sort(coupon.begin(),coupon.end(),com);
    sort(product.begin(),product.end(),com);
    for(int i=0;i<pc&&i<pp;i++){
        total+=coupon[i]*product[i];
    }
    for(int i=0;i<nc&&i<np;i++){
        total+=coupon[n1-1-i]*product[n2-1-i];
    }
    cout<<total;
    return 0;
 }
