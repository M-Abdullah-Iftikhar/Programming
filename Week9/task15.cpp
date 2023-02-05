#include <iostream>
using namespace std;

main()
{
    int money[4];
    float price;
    float moneyT;

    

    cout << "Enter Quarter: ";
    cin >> money[0];
    cout << "Enter Dime: ";
    cin >> money[1];
    cout << "Enter Nickel: ";
    cin >> money[2];
    cout << "Enter Penny: ";
    cin >> money[3];

    /*
         or We Can Use this for Loop
    for (int x = 0; x < 4; x++)
    {
        cout << "Enter Change: ";
        cin >> money[x];
    }*/

    cout << "Enter price of product: ";
    cin >> price;

    moneyT = (0.25 * money[0]) + (0.10 * money[1]) + (0.05 * money[2]) + (0.01 * money[3]);

    if (moneyT >= price)
    {
        cout << "True";
    }

    else if (moneyT < price)
    {
        cout << "False";
    }
}