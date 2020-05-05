    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        int num1,num2,d;
        cin>>num1>>num2>>d;
        num1+=num2;
        string result;
        while(num1!=0){
            int m=num1%d;
            result.insert(result.begin(),1,(char)m+'0');
            num1/=d;
        }
        cout<<result;
        return 0;
    }
