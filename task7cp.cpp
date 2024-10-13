#include<iostream>
#include<string>
using namespace std;
string checkstatus(int ehour,int emin,int shour,int smin);
main()
{
    int ehour,emin,shour,smin;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>ehour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>emin;
    cout<<"Enter Student hour of arrival: ";
    cin>>shour;
    cout<<"Enter Student minutes of arrival: ";
    cin>>smin;
    string output;
    output=checkstatus(ehour,emin,shour,smin);
    cout<<output;
}

string checkstatus(int ehour,int emin,int shour,int smin)
{
    string status;
    int h1,h2,time1,time2,ftime1,ftime2,fhour1,fhour2,fmin1,fmin2;
    h1=ehour*60;
    h2=shour*60;
    time1=h1+emin;
    time2=h2+smin;
    ftime1=time1-time2;
    ftime2=time2-time1;
    fhour1=ftime1/60;
    fmin1=ftime1%60;
    fhour2=ftime2/60;
    fmin2=ftime2%60;
    if(time1==time2)
    {
        status="On time";
    }
    else if(ftime1<=30)
    {
        status="On time\n"+to_string(fmin1)+" minutes before start";
    }
    else if(ftime1>30 && ftime1<60)
    {
        status="Early\n"+to_string(fmin1)+" minutes before start";
    }
    else if(ftime1>60)
    {
        status="Early\n"+to_string(fhour1)+":"+to_string(fmin1)+" hours before start";
    }
    else if(ftime2>0 && ftime2<60)
    {
        status="Late\n"+to_string(fmin2)+" minutes after start";
    }
    else if(ftime2>60)
    {
        status="Late\n"+to_string(fhour2)+":"+to_string(fmin2)+" hours after start";
    }
    return status;

}