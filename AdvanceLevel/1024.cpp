    #include<iostream>
    #include<string>
    #include<algorithm>
    using namespace std;
    string getReverse(string num){
        string num_ = num;
        int carry=0;
        reverse(num.begin(),num.end());
        string result="";
        for(int i=0;i<num.size();i++){
            int temp = carry + (num_[i]-'0') +(num[i]-'0');
            result.insert(result.begin(),1,char(temp%10+'0'));
            carry =temp/10;
        }
        if(carry==1)
            result.insert(result.begin(),1,char(carry%10+'0'));
        return result;
    }
    int main()
    {
        string num;
        int step;
        cin>>num>>step;
        int i=0;
        for(i=0;i<step;i++){
            string numk=num;
            reverse(numk.begin(),numk.end());
            if(num==numk){
                cout<<num<<endl;
                cout<<i;
                break;
            }
            else
                num =getReverse(num);
        }
        if(i==step){
            cout<<num<<endl;
            cout<<i;
        }
        return 0;
    }
