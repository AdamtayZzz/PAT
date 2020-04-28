#include <iostream>
#include<string>
using namespace std;

int main()
{
    string min_name,min_id,max_name,max_id;
    int min_score,max_score;
    int num;
    cin >>num;
    for(int i=0;i<num;i++){
        string name,id;
        int score;
        cin >> name >> id >> score;
        if(i==0){
            min_name=name; max_name=name;
            min_id=id; max_id =id;
            min_score=score; max_score=score;
        }
        else{
            if(score>max_score){
                max_name=name;
                max_id=id;
                max_score=score;
            }
            if(score<min_score){
                min_name=name;
                min_id =id;
                min_score=score;
            }
        }
    }
    cout << max_name << " " << max_id<<endl;
    cout << min_name << " " << min_id<<endl;
    return 0;
}
