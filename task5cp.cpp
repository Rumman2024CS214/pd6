#include<iostream>
using namespace std;
float calculatefruitprice(string day,string fruit,int quantity);
main()
{
    string fruit,day;
    int quantity;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of week (e.g. Monday,Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    float cost;
    cost=calculatefruitprice(day,fruit,quantity);
    if(cost!=0)
    {
        cout<<cost;
    }
    else
    {
        cout<<"Error";
    }
}

float calculatefruitprice(string day,string fruit,int quantity)
{
    float price=0;
    if(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday")
    {
        if(fruit=="Banana")
        {
            price=quantity*2.50;
        }
        else if(fruit=="Apple")
        {
            price=quantity*1.20;
        }
        else if(fruit=="Orange")
        {
            price=quantity*0.85;
        }
        else if(fruit=="Grapefruit")
        {
            price=quantity*1.45;
        }
        else if(fruit=="Kiwi")
        {
            price=quantity*2.70;
        }
        else if(fruit=="Pineapple")
        {
            price=quantity*5.50;
        }
        else if(fruit=="Grapes")
        {
            price=quantity*3.85;
        }
        else
        {
            price=0;
        }
    }
    else if(day=="Saturday"||day=="Sunday")
    {
        
        if(fruit=="Banana")
        {
            price=quantity*2.70;
        }
        else if(fruit=="Apple")
        {
            price=quantity*1.25;
        }
        else if(fruit=="Orange")
        {
            price=quantity*0.90;
        }
        else if(fruit=="Grapefruit")
        {
            price=quantity*1.60;
        }
        else if(fruit=="Kiwi")
        {
            price=quantity*3.00;
        }
        else if(fruit=="Pineapple")
        {
            price=quantity*5.60;
        }
        else if(fruit=="Grapes")
        {
            price=quantity*4.20;
        }
        else
        {
            price=0;
        }

    }
    else
    {
        price=0;
    }
    return price;
    
}
