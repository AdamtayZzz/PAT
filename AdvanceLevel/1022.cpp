    #include<iostream>
    #include<set>
    #include<map>
    #include<string>
    using namespace std;
    int main()
    {
        map<string,set<int>> title;
        map<string,set<int>> author;
        map<string,set<int>> keyword;
        map<string,set<int>> publisher;
        map<int,set<int>> year;
        int n;
        cin>>n;
        int id,y;
        string t,a,k,p;
        for(int i=0;i<n;i++){
            cin>>id;cin.ignore();
            getline(cin,t);title[t].insert(id);
            getline(cin,a);author[a].insert(id);
            while(cin>>k){
                keyword[k].insert(id);
                if(getchar()=='\n')
                    break;
            }
            getline(cin,p);publisher[p].insert(id);
            cin>>y;year[y].insert(id);
        }
        int m;
        cin>>m;
        int category;
        string content;
        int year_content;
        for(int i=0;i<m;i++){
            cin>>category;
            if(category!=5){
                getchar();getchar();
                getline(cin,content);
                cout<<category<<": "<<content<<endl;
            }
            else{
                getchar();getchar();
                cin>>year_content;
                cout<<category<<": ";
                printf("%04d\n",year_content);
            }
            if(category==1){
                if(title.count(content)==0)
                    cout<<"Not Found"<<endl;
                else{
                    set<int> s = title[content];
                    for(set<int>::iterator iter2=s.begin();iter2!=s.end();iter2++){
                        printf("%07d\n",*iter2);
                        }
                }
            }else if(category==2){
                if(author.count(content)==0)
                    cout<<"Not Found"<<endl;
                else{
                    set<int> s = author[content];
                    for(set<int>::iterator iter2=s.begin();iter2!=s.end();iter2++){
                        printf("%07d\n",*iter2);}
                }
            }else if(category==3){
                if(keyword.count(content)==0)
                    cout<<"Not Found"<<endl;
                else{
                    set<int> s = keyword[content];
                    for(set<int>::iterator iter2=s.begin();iter2!=s.end();iter2++){
                        printf("%07d\n",*iter2);}
                }
            }else if(category==4){
                if(publisher.count(content)==0)
                    cout<<"Not Found"<<endl;
                else{
                    set<int> s = publisher[content];
                    for(set<int>::iterator iter2=s.begin();iter2!=s.end();iter2++){
                        printf("%07d\n",*iter2);}
                }
            }else{
                if(year.count(year_content)==0)
                    cout<<"Not Found"<<endl;
                else{
                    set<int> s = year[year_content];
                    for(set<int>::iterator iter2=s.begin();iter2!=s.end();iter2++){
                        printf("%07d\n",*iter2);}
                }
            }
        }
        return 0;
    }
