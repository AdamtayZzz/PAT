#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
    int M,N,tol;
    cin>>M>>N>>tol;
    vector<vector<int>> img(N);
    map<int,int> map_;
    for(int i=0;i<N;i++){
        vector<int> row(M);
        for(int j=0;j<M;j++){
            cin>>row[j];
            map_[row[j]]++;
        }
        img[i]=row;
    }
    int c=0,m=0,n=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            bool flag=true;
            for(int k=-1;k<=1;k++){
                for(int h=-1;h<=1;h++){
                    if(k==0&&h==0){
                        continue;
                    }
                    if(i+k>=0&&i+k<N&&j+h>=0&&j+h<M&&img[i][j]-img[i+k][j+h]<=tol&&img[i][j]-img[i+k][j+h]>=0 - tol){
                            flag=false;
                            break;
                        }
                }
                if(flag==false)
                    break;
            }
            if(map_[img[i][j]]==1&&flag==true){
                m=j;n=i;c++;
            }
            if(c>1)
                break;
        }
        if(c>1)
            break;
    }
    if(c==1)
        cout<<"("<<m+1<<", "<<n+1<<"): "<<img[n][m];
    else if(c==0)
        cout<<"Not Exist";
    else
        cout<<"Not Unique";
    return 0;
}
