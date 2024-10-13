#include<iostream>
#include<cmath>
using namespace std;
int calculategames(string year,int holidays,int weekend);
main()
{
    string year;
    int holidays,weekend;
    cout<<"Enter the type: ";
    cin>>year;
    cout<<"Enter the number of holidays: ";
    cin>>holidays;
    cout<<"Enter the number of weekends: ";
    cin>>weekend;
    int output;
    output=calculategames(year,holidays,weekend);
    cout<<output;
    
}

int calculategames(string year,int holidays,int weekend)
{
    float game1,game2,game3,increase;
    int games;
    game1=holidays*2/3;
    game2=48-weekend;
    game2=game2*0.75;
    game2=game2+weekend;
    game3=game1+game2;
    if(year=="normal")
    {
        games=floor(game3);
    }
    else if(year=="leap")
    {
        increase=game3*0.15;
        game3=game3+increase;
        games=floor(game3);
    }
    return games;
}