    #include<iostream>
    #include<vector>
    #include<map>
    #include<cmath>
    #include<algorithm>
    using namespace std;
    map<int,int> best_place;
    map<int,char> best_course;
    typedef struct{
        int id;
        int c;
        int m;
        int e;
        int a;
    }Student;
    bool com1(Student s1,Student s2){
        return s1.a > s2.a;
    }
    bool com2(Student s1,Student s2){
        return s1.c > s2.c;
    }
    bool com3(Student s1,Student s2){
        return s1.m > s2.m;
    }
    bool com4(Student s1,Student s2){
        return s1.e > s2.e;
    }
    int main()
    {
        int n,m;
        cin>>n>>m;
        vector<Student> record(n);
        for(int i=0;i<n;i++){
            cin>>record[i].id>>record[i].c>>record[i].m>>record[i].e;
            record[i].a = round(float(record[i].c+record[i].m+record[i].e)/3);
            best_place[record[i].id]=n+1;
        }
        sort(record.begin(),record.end(),com1);
        int basic=0;
        for(int i=0;i<n;i++){
            if(i!=0&&record[i-1].a==record[i].a)
                basic+=0;
            else
                basic=i+1;
            if(basic<best_place[record[i].id]){
                best_place[record[i].id] = basic;
                best_course[record[i].id] = 'A';
            }
        }
        sort(record.begin(),record.end(),com2);
        basic=0;
        for(int i=0;i<n;i++){
            if(i!=0&&record[i-1].c==record[i].c)
                basic+=0;
            else
                basic=i+1;
            if(basic<best_place[record[i].id]){
                best_place[record[i].id] = basic;
                best_course[record[i].id] = 'C';
            }
        }
        sort(record.begin(),record.end(),com3);
        basic=0;
        for(int i=0;i<n;i++){
            if(i!=0&&record[i-1].m==record[i].m)
                basic+=0;
            else
                basic=i+1;
            if(basic<best_place[record[i].id]){
                best_place[record[i].id] = basic;
                best_course[record[i].id] = 'M';
            }
        }
        sort(record.begin(),record.end(),com4);
        basic=0;
        for(int i=0;i<n;i++){
            if(i!=0&&record[i-1].e==record[i].e)
                basic+=0;
            else
                basic=i+1;
            if(basic<best_place[record[i].id]){
                best_place[record[i].id] = basic;
                best_course[record[i].id] = 'E';
            }
        }
        int id;
        for(int i=0;i<m;i++){
            cin>>id;
            if(best_place.count(id)){
                cout<<best_place[id]<<" "<<best_course[id];
                if(i!=m-1)
                    cout<<endl;
            }
            else{
                cout<<"N/A";
                if(i!=m-1)
                    cout<<endl;
            }
        }
        return 0;
    }
