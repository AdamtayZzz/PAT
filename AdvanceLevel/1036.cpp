 #include<iostream>
 #include<string>
 #include<queue>
 using namespace std;
 struct student{
    string name;
    string id;
 };
 int main(){
    int n;
    cin>>n;
    string name,gender,id;
    int grade;
    int min_grade=101;
    int max_grade=-1;
    bool find_male=false;
    bool find_female=false;
    student male;
    student female;
    for(int i=0;i<n;i++){
        cin>>name>>gender>>id>>grade;
        if(gender=="M"&&grade<min_grade){
            min_grade=grade;
            find_male=true;
            male.id = id;
            male.name = name;
        }
        if(gender=="F"&&grade>max_grade){
            max_grade = grade;
            find_female = true;
            female.id = id;
            female.name =name;
        }
    }
    if(find_female){
        cout<<female.name<<" "<<female.id<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    if(find_male){
        cout<<male.name<<" "<<male.id<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    if(find_female&&find_male)
        cout<<max_grade-min_grade;
    else
        cout<<"NA";
    return 0;
 }
