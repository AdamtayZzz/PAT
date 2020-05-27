    #include<iostream>
    #include<string>
    #include<algorithm>
    using namespace std;
    int main()
    {
        string str1;
        cin>>str1;
        string str2=str1;
        reverse(str2.begin(),str2.end());
        int c=0;
        while(str1!=str2){
            string answer="";
            int carry=0;
            for(int i=str1.size()-1;i>=0;i--){
                int t= ((str1[i]-'0')+(str2[i]-'0')+carry) %10;
                carry = ((str1[i]-'0')+(str2[i]-'0')+carry )/10;
                answer.insert(answer.begin(),1,char(t+'0'));
                if(i==0&&carry==1)
                    answer.insert(answer.begin(),1,char(carry+'0'));
            }
            c++;
            if(c<=10)
                cout<<str1<<" + "<<str2<<" = "<<answer<<endl;
            else{
                break;
            }
            str1=answer;
            str2=answer;
            reverse(str2.begin(),str2.end());
            if(str1==str2){
                break;
            }
        }
        if(str1==str2)
            cout<<str1<<" is a palindromic number.";
        else
            cout<<"Not found in 10 iterations.";
        return 0;
    }
