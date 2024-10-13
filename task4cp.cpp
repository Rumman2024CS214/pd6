#include<iostream>
using namespace std;
string type(char code);
float amount(char code,char time,int min);
main()
{
    char code,time;
    int min;
    cout<<"Enter the service code (R/r for regular,P/p for premium): ";
    cin>>code;
    if(code=='P'||code=='p')
    {
        cout<<"Enter time of call (D/d for day,N/n for night): ";
        cin>>time;
    }
    cout<<"Enter the number of minutes used: ";
    cin>>min;
    string service;
    service=type(code);
    cout<<"Service Type: "<<service<<endl;
    cout<<"Total Minutes Used: "<<min<<endl;
    float output;
    output=amount(code,time,min);
    cout<<"Amount Due: $"<<output<<endl;
}

string type(char code)
{
    string stype;
    if(code=='R'||code=='r')
    {
        stype="Regular";
    }
    else if(code=='P'||code=='p')
    {
        stype="Premium";
    }
    return stype;
}

float amount(char code,char time,int min)
{
    float m,cost;
    if(code=='R'||code=='r')
    {
        if(min>50)
        {
            m=min-50;
            cost=10.00+(m*0.20);
        }
        else
        {
            cost=10.00;
        }
    }
    else if(code=='P'||code=='p')
    {
        if(time=='D'||time=='d')
        {
            if(min>75)
            {
                m=min-75;
                cost=25.00+(m*0.10);
            }
            else
            {
                cost=25.00;
            }
        }
        else if(time=='N'||time=='n')
        {
            if(min>100)
            {
                m=min-100;
                cost=25.00+(m*0.05);
            }
            else
            {
                cost=25.00;
            }
        }
    }
    return cost;
}