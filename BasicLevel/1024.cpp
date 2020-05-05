    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string reg;
        cin>>reg;
        unsigned int position;
        for(unsigned int index=0;index<reg.size();index++){
            if(reg[index]=='E')
                position=index;
        }
        string num=reg.substr(0,position);
        string e = reg.substr(position+1,reg.size()-position);
        int e_num = stoi(e.substr(1));
        if(e[0]=='-'){
            num.erase(2,1);
            num.insert(num.begin()+1,e_num,'0');
            num.insert(num.begin()+2,1,'.');
        }
        if(e[0]=='+'){
            int length = num.size()-3;
            if(e_num>=length){
                num.insert(num.end(),e_num-length,'0');
                num.erase(2,1);
            }
            else{
                num.erase(2,1);
                num.insert(num.begin()+e_num+2,1,'.');
            }
        }
      	if(num[0]=='+')
            num.erase(0,1);
        cout<<num;
        return 0;
    }
