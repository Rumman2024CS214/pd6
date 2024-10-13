#include<iostream>
using namespace std;
string checkposition(int h,int x,int y);
main()
{
    int h,x,y;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    string output;
    output=checkposition(h,x,y);
    cout<<output;
}

string checkposition(int h,int x,int y)
{
    string position;
    if((x>=0 && x<=3*h && y==0) || (x==0 && y==h) || (x==h && y==h) || (x==h && (y>=h || y<=4*h)) || ((x>=h || x<=2*h) && y==4*h) || (x==2*h && (y<=4*h || y>=h)) || ((x>=2*h || x<=3*h) && y==h) || (x==3*h && (y<=h || y>=0)))
    {
        position="Border";
    }
    else if((x>0 && x<h && y>0 && y<h)||(x>h && x<2*h && y>0 && y<4*h) || (x>2*h && x<3*h && y>0 && y<h))
    {
        position="Inside";
    }
    else
    {
        position="Outside";
    }
    return position;
}

