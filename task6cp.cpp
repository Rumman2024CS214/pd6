#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
string hotelprice(string month,float stays);
main()
{
    string month;
    float stays;
    cout<<"Enter the month (May,June,July,August,September,October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    string output;
    output=hotelprice(month,stays);
    cout<<output;

}

string hotelprice(string month,float stays)
{
    string cost;
    float price1,price2,d1,d2,p1,p2;
    if(month=="May" || month=="October")
    {
        if(stays>=7 && stays<=14)
        {
            price1=(50.0*stays);
            d1=(price1*5)/100;
            p1=price1-d1;
            price2=(65.0*stays);
            d2=(price2*5)/100;
            p2=price2-d2;
        }
        else if(stays>14)
        {
            price1=(50.0*stays);
            d1=(price1*30)/100;
            p1=price1-d1;
            price2=(65.0*stays);
            d2=(price2*10)/100;
            p2=price2-d2;
        }
        else
        {
            p1=(50.0*stays);
            p2=(65.0*stays);
        }
    }
    else if(month=="June" || month=="September")
    {
        if(stays>14)
        {
            price1=(75.20*stays);
            d1=(price1*20)/100;
            p1=price1-d1;
            price2=(68.70*stays);
            d2=(price2*10)/100;
            p2=price2-d2;
        }
        else
        {
            p1=(75.20*stays);
            p2=(68.70*stays);
        }
    }
    else if(month=="July" || month=="August")
    {    
        if(stays>14)
        {
            p1=(76.0*stays);
            price2=(77.0*stays);
            d2=(price2*10)/100;
            p2=price2-d2;
        }
        else
        {
            p1=(76.0*stays);
            p2=(77.0*stays);
        }
        
    }
    cost="Apartment: "+to_string(p2)+"$\nStudio: "+to_string(p1)+"$";
    return cost;
}
