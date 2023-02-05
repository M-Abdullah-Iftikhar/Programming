#include <iostream>
using namespace std;

main()
{
    int arrSize;
    int toCheck;

    cout << "Enter Arrey Size: ";
    cin >> arrSize;

    int number[arrSize];

    for (int x = 0; x < arrSize; x++)
    {
        cout << "Enter a Number: ";
        cin >> number[x];
    }

    cout << "Enter a Character to be found: ";
    cin >> toCheck;

    for (int x = 0; x < arrSize; x++)
    {
        if (toCheck == number[x])
        {
            cout << "Already Present";
        }
    }
}