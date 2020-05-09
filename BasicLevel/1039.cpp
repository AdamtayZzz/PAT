    #include<iostream>
    #include<map>
    #include<string>
    using namespace std;
    int main()
    {
        string str1,str2;
        getline(cin,str1);
        getline(cin,str2);
        map<char,int> m;
        for(unsigned int i=0;i<str1.size();i++){
            char c=str1[i];
            if(m.count(c)){
                map<char,int>::iterator iter=m.find(c);
                iter->second+=1;
            }
            else{
                m.insert(pair<char,int>(c,1));
            }
        }
        bool flag=true;
        int count_=0;
        for(unsigned int i=0;i<str2.size();i++){
            char c=str2[i];
            if(m.count(c)){
                map<char,int>::iterator iter=m.find(c);
                if(iter->second<=0){
                    flag=false;
                    count_++;
                }
                iter->second-=1;
            }
            else{
                flag=false;
                count_++;
            }
        }
        if(!flag)
            cout<<"No "<<count_;
        else{
            int total=0;
            for(map<char,int>::iterator iter=m.begin();iter!=m.end();iter++){
                total+=iter->second;
            }
            cout<<"Yes "<<total;
        }
        return 0;
    }
