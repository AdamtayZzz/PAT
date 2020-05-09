    #include<iostream>
    #include<string>
    using namespace std;
    int main()
    {
        bool flag=false;
        //get number
        int a1,a2,a3,b1,b2,b3;
        char c;
        cin>>a1>>c>>a2>>c>>a3>>b1>>c>>b2>>c>>b3;
        long long int k1=a1*29*17+a2*17+a3;
        long long int k2=b1*29*17+b2*17+b3;
        if(k1<=k2){
            flag=true;
            int temp=a1; a1=b1; b1=temp;
            temp=a2; a2=b2; b2=temp;
            temp=a3; a3=b3; b3=temp;
        }
        //sub
        int c1,c2,c3;
        if(a3>=b3)
            c3=a3-b3;
        else{
            a2--;
            c3=a3+29-b3;
        }
        if(a2>=b2)
            c2=a2-b2;
        else{
            a1--;
            c2=a2+17-b2;
        }
        c1=a1-b1;
        //output
        if(!flag)
            cout<<"-";
        cout<<c1<<"."<<c2<<"."<<c3;
        return 0;
    }
