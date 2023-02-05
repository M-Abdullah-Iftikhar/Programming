#include <iostream>
using namespace std;

main()
{
    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    string fruitF;
    int kgs;
    bool check;

    cout << "Enter name of fruit: ";
    cin >> fruitF;
    cout << "Enter amount in KGs: ";
    cin >> kgs;

    for (int x = 0; x < 4; x++)
    {
        if (fruitF == fruits[x])
        {
            cout << "Price of " << kgs << " kg of " << fruits[x] << " is: " << price[x] * kgs;
            
            check = true;
            break;
        }
        else
        {
            check = false;
        }
    }
    if (check == false)
    {
        cout << "Fruit not present";
    }
}