    #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
        int time1,time2;
        cin>>time1>>time2;
        int dif=(time2-time1)/100;
        int h=dif/3600;
        int m=dif%3600/60;
        float s=(float)(time2-time1)/100-h*3600-m*60;
        if(h<10)
            cout<<"0"<<h<<":";
        else
            cout<<h<<":";
        if(m<10)
            cout<<"0"<<m<<":";
        else
            cout<<m<<":";
        if(round(s)<10)
            cout<<"0"<<round(s);
        else
            cout<<round(s);
        return 0;
    }
