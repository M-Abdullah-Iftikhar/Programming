#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

main()
{

    float money, moneyT;
    int year;

    cout << "Enter Inheritance amounte: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;
    moneyT = calculatePrice(money, year);
	
cout<<moneyT<<endl;

    if (money > moneyT)
    {
        money = money - moneyT;
        cout << "yes! he will live carefree life & will have " << money << " Dollars left";
    }
    else if (money < moneyT)
    {
        money = moneyT - money;
        cout << "No! he will need " << money << " more Dollars to survive";
    }
}

float calculatePrice(float money, int year)
{
    float moneyT;
    float even = 0, odd = 0,sum;
    int year1;
    year1 = year - 1799;
    year = year - 1800;
    while (year1 > 0)
    {
        if (year1 % 2 == 0)
        {
            odd++;
        }
        else if (year1 % 2 != 0)
        {
            even++;
        }
        year1--;
    }
	sum= (odd/2)*(38+((odd-1)*2));	
    cout<<sum<<endl;
	
moneyT= (even*12000) + ((odd*12000)+(sum*50));
return moneyT;
}