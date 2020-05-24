#include<iostream>
using namespace std;

int main() {
    int T,K;
    cin>>T>>K;
    int n1,b,t,n2;
    for(int i=0;i<K;i++){
        cin>>n1>>b>>t>>n2;
        if(T==0){
            printf("Game Over.");
            break;
        }
        else if(t>T)
            printf("Not enough tokens.  Total = %d.",T);
        else{
            if((n1>n2&&b==0)||(n1<n2&&b==1)){
                T+=t;
                printf("Win %d!  Total = %d.",t,T);
            }
            else{
                T-=t;
                printf("Lose %d.  Total = %d.",t,T);
            }
        }
        if(i!=K-1)
            printf("\n");
    }
    return 0;
}
