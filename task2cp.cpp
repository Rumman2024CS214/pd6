#include<iostream>
using namespace std;
float calculateavg(float engmarks,float mathmarks,float chemmarks,float biomarks,float ssmarks);
string calculategrade(float average);
main()
{
    float engmarks,mathmarks,chemmarks,biomarks,ssmarks;
    float average;
    string name;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>engmarks;
    cout<<"Enter marks for Maths: ";
    cin>>mathmarks;
    cout<<"Enter marks for Chemistry: ";
    cin>>chemmarks;
    cout<<"Enter marks for Biology: ";
    cin>>biomarks;
    cout<<"Enter marks for Social Science: ";
    cin>>ssmarks;
    cout<<"Student Name: "<<name<<endl;
    average=calculateavg(engmarks,mathmarks,chemmarks,biomarks,ssmarks);
    cout<<"Percentage: "<<average<<"%"<<endl;
    string output;
    output=calculategrade(average);
    cout<<"Grade: "<<output<<endl;
}

float calculateavg(float engmarks,float mathmarks,float chemmarks,float biomarks,float ssmarks)
{
    float avg;
    avg=(engmarks+mathmarks+chemmarks+biomarks+ssmarks)/5;
    return avg;
}

string calculategrade(float average)
{
    string grade;
    if(average>=90 && average<=100)
    {
        grade="A+";
    }
    else if(average>=80 && average<90)
    {
        grade="A";
    }
    else if(average>=70 && average<80)
    {
        grade="B+";
    }
    else if(average>=60 && average<70)
    {
        grade="B";
    }
    else if(average>=50 && average<60)
    {
        grade="C";
    }
    else if(average>=40 && average<50)
    {
        grade="D";
    }
    else if(average<40)
    {
        grade="F";
    }
    return grade;
    
}