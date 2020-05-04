#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    int num,require;
    float expense=0;
    int c=0;
    scanf("%d %d",&num,&require);
    vector<float> storage(num);
    vector<float> price(num);
    vector<float> average(num);
    for(int i=0;i<num;i++)
        scanf("%f",&storage[i]);
    for(int i=0;i<num;i++)
        scanf("%f",&price[i]);
    for(int i=0;i<num;i++)
        average[i]=price[i]/storage[i];
    while(require>0&&c<num){
        int index = max_element(average.begin(),average.end())-average.begin();
        if(require>=storage[index]){
            require-=storage[index];
            expense+=price[index];
            average[index]=0;
        }
        else{
            expense+=require*average[index];
            require=0;
            average[index]=0;
        }
        c+=1;
    }
    printf("%.2f",expense);
    return 0;
}
