    #include<iostream>
    #include<vector>
    #include<string>
    #include<algorithm>
    #include<map>
    #include<cmath>
    using namespace std;
    typedef struct{
        string id;
        int g_p=-1;
        int g_m=-1;
        int g_f=-1;
        int g;
    }student;
    bool com(student s1,student s2){
        if(s1.g>s2.g)
            return true;
        else if(s1.g==s2.g){
            if(s1.id<s2.id)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    int main()
    {
        int p,m,n;
        cin>>p>>m>>n;
        map<string,student> form;
        string id;
        int score;
        for(int i=0;i<p;i++){
            cin>>id>>score;
            student k;
            k.id=id;
            k.g_p=score;
            form[id]=k;
        }
        for(int i=0;i<m;i++){
            cin>>id>>score;
            if(form.count(id)){
                form[id].g_m=score;
            }
            else{
                student k;
                k.id=id;
                k.g_m=score;
                form[id]=k;
            }
        }
        for(int i=0;i<n;i++){
            cin>>id>>score;
            if(form.count(id)){
                form[id].g_f=score;
            }
            else{
                student k;
                k.id=id;
                k.g_f=score;
                form[id]=k;
            }
        }
        vector<student> result;
        for(map<string,student>::iterator iter=form.begin();iter!=form.end();iter++){
            student t=iter->second;
            if(t.g_p<200)
                continue;
            if(t.g_m>t.g_f)
                t.g=round(0.4*t.g_m+0.6*t.g_f);
            else
                t.g=t.g_f;
            if(t.g<60)
                continue;
            else
                result.push_back(t);
        }
        sort(result.begin(),result.end(),com);
        bool flag=false;
        for(vector<student>::iterator iter=result.begin();iter!=result.end();iter++){
            student t=*iter;
            if(flag)
                cout<<endl<<t.id<<" "<<t.g_p<<" "<<t.g_m<<" "<<t.g_f<<" "<<t.g;
            else
                cout<<t.id<<" "<<t.g_p<<" "<<t.g_m<<" "<<t.g_f<<" "<<t.g;
            flag=true;
        }
        return 0;
    }
