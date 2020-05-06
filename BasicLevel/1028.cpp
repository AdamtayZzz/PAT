    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        string name;
        string birth;
        string max_name,min_name;
        string max_birth="2014/09/06";
        string min_birth="1814/09/06";
        int count_=0;
        for(int i=0;i<n;i++){
            cin>>name>>birth;
            if(birth<"1814/09/06"||birth>"2014/09/06")
                continue;
            if(birth<max_birth){
                max_name=name;
                max_birth=birth;
            }
            if(birth>min_birth){
                min_name=name;
                min_birth=birth;
            }
            count_++;
        }
        cout<<count_;
        if(count_>0)
            cout<<" "<<max_name<<" "<<min_name;
        return 0;
    }
