#include <iostream>
using namespace std;

main()
{
    string month;
    int strays;
    float price1=0, price2=0;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter Number of strays: ";
    cin >> strays;

    if (month == "may" || month == "october")
    {
        price1 = strays * 50;
        price2 = strays * 65;
        if (strays >= 7 && strays < 14)
        {
            price1 = price1 - (price1 * 0.15);
        }
        else if (strays >= 14)
        {
            price1 = price1 - (price1 * 0.3);
            price2 = price2 - (price2 * 0.1);
        }
    }

    else if (month == "june" || month == "september")
    {
        price1 = strays * 75.2;
        price2 = strays * 68.7;
        if (strays >= 14)
        {
            price1 = price1 - (price1 * 0.2);
            price2 = price2 - (price2 * 0.1);
        }
    }

    else if (month == "july" || month == "august")
    {
        price1 = strays * 76;
        price2 = strays * 77;
        if(strays>=14){
            price2=price2-(price2*0.1);
        }
    }
    else {
        cout<<"ERROR";
    }

    cout<<"Apartment: "<<price2<<endl;
    cout<<"Studio: "<<price1;


}