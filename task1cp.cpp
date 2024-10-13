#include<iostream>
using namespace std;
string ractivity(string temp,string humidity);
main()
{
    string temp,humidity;
    cout<<"Enter temperature (warm/cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry/humid): ";
    cin>>humidity;
    string output;
    output=ractivity(temp,humidity);
    cout<<"Recommended activity: "<<output;
}

string ractivity(string temp,string humidity)
{
    string activity;
    if(temp=="warm" && humidity=="dry")
    {
        activity="Play tennis";
    }
    else if(temp=="warm" && humidity=="humid")
    {
        activity="Swim";
    }
    else if(temp=="cold" && humidity=="dry")
    {
        activity="Play basketball";
    }
    else if(temp=="cold" && humidity=="humid")
    {
        activity="Watch tv";
    }
    return activity;
}