    #include<iostream>
    #include<string>
    #include<algorithm>
    using namespace std;
    int main()
    {
        char c;
        int result[6]={0,0,0,0,0,0};
        while(true){
            cin.get(c);
            if(c=='\n') break;
            else if(c=='P') result[0]++;
            else if(c=='A') result[1]++;
            else if(c=='T') result[2]++;
            else if(c=='e') result[3]++;
            else if(c=='s') result[4]++;
            else if(c=='t') result[5]++;
            else continue;
        }
        int max_index=max_element(result,result+6)-result;
        while(result[max_index]>0){
            if(result[0]>0) {cout<<"P"; result[0]-=1;}
            if(result[1]>0) {cout<<"A"; result[1]-=1;}
            if(result[2]>0) {cout<<"T"; result[2]-=1;}
            if(result[3]>0) {cout<<"e"; result[3]-=1;}
            if(result[4]>0) {cout<<"s"; result[4]-=1;}
            if(result[5]>0) {cout<<"t"; result[5]-=1;}
        }

        return 0;
    }
