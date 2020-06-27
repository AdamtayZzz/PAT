    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    struct card{
        int card_id;
        int index;
    };
    bool com(card a,card b){
        return a.index<b.index;
    }
    int main()
    {
        int n;
        cin>>n;
        int order[54];
        vector<card> l(54);
        for(int i=0;i<54;i++){
            cin>>order[i];
            l[i].card_id=i;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<54;j++){
                l[j].index = order[j];
            }
            sort(l.begin(),l.end(),com);
        }
        for(int i=0;i<54;i++){
            int t1 = l[i].card_id /13;
            int t2 = l[i].card_id %13;
            string result = "SHCDJ";
            cout<<result[t1]<<t2+1;
            if(i!=53)
                cout<<" ";
        }
        return 0;
    }
