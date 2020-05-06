    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        string str1,str2;
        cin>>str1>>str2;
        int num[10]={0};
        int alpha[26]={0};
        int index_2=0;
        string result;
        for(unsigned int index=0;index<str1.size();index++){
            if(str1[index]!=str2[index_2]){
                char c=str1[index];
                if(isalpha(c)){
                    alpha[toupper(c)-'A']+=1;
                    if(alpha[toupper(c)-'A']==1)
                        result+=toupper(c);
                }
                else{
                    num[c-'0']+=1;
                    if(num[c-'0']==1)
                        result+=toupper(c);
                }
            }
            else
                index_2++;
        }
        cout<<result;
        return 0;
    }
