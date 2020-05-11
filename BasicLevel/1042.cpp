    #include<iostream>
    #include<map>
    #include<string>
    using namespace std;
    int main()
    {
        char c;
        map<char,int> m;
        while(true){
            cin.get(c);
            if(c=='\n')
                break;
            else if(isalpha(c)){
                    c=tolower(c);
                    if(m.count(c)){
                    map<char,int>::iterator iter=m.find(c);
                    iter->second+=1;
                    }
                    else
                        m[c]=1;
                }
            else
                continue;

        }
        char max_c;
        int max_t=0;
        for(map<char,int>::iterator iter=m.begin();iter!=m.end();iter++){
            if(iter->second>max_t){
                max_c=iter->first;
                max_t=iter->second;
            }
        }
        cout<<max_c<<" "<<max_t;
        return 0;
    }
