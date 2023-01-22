#include <iostream>
#include <windows.h>
using namespace std;

float taxCalculator(char type,float price);



int main()
{
    char type;
    float price1;
    float price2;

    cout<<"Enter Vehicle Type(M,E,S,V,T): ";
    cin>>type;

    cout<<"Enter vehicle Price: ";
    cin>>price1;

    price2 = taxCalculator(type,price1);

    cout<<"Total Price of "<<type<<" type Vehicle, After Adding tax is: "<<price2;

}


float taxCalculator(char type,float price){

    if(type=='M'){
        price=price+(price*0.06);
        return price;
    }
    if(type=='E'){
        price=price+(price*0.08);
        return price;
    }
    if(type=='S'){
        price=price+(price*0.1);
        return price;
    }
    if(type=='V'){
        price=price+(price*0.12);
        return price;
    }
    if(type=='T'){
        price=price+(price*0.15);
        return price;
    }

}