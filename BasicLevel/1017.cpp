#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cin>>num;
    char A,B;
    int win=0,tie=0,lose=0;
    int max_a[3]={0,0,0};
    int max_b[3]={0,0,0};
    while(num>0){
        cin>>A>>B;
        switch (A){
            case 'B':
                switch (B){
                    case 'B':
                        tie++;
                        break;
                    case 'C':
                        win++;
                        max_a[0]++;
                        break;
                    case 'J':
                        lose++;
                        max_b[2]++;
                        break;}
                break;
            case 'C':
                switch (B){
                    case 'B':
                        lose++;
                        max_b[0]++;
                        break;
                    case 'C':
                        tie++;
                        break;
                    case 'J':
                        win++;
                        max_a[1]++;
                        break;}
                break;
            case 'J':
                switch (B){
                    case 'B':
                        win++;
                        max_a[2]++;
                        break;
                    case 'C':
                        lose++;
                        max_b[1]++;
                        break;
                    case 'J':
                        tie++;
                        break;}
                break;
            }
            num--;
        }
    cout<<win<<" "<<tie<<" "<<lose<<endl;
    cout<<lose<<" "<<tie<<" "<<win<<endl;
    int max1=max_element(max_a,max_a+3)-max_a;
    int max2=max_element(max_b,max_b+3)-max_b;
    switch(max1){
        case(0):cout<<'B';break;
        case(1):cout<<'C';break;
        case(2):cout<<'J';break;
    }
    cout<<" ";
    switch(max2){
        case(0):cout<<'B';break;
        case(1):cout<<'C';break;
        case(2):cout<<'J';break;
    }
    return 0;
}
