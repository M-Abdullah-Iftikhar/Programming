#include <iostream>
using namespace std;

main()
{
    int arrSize;

    bool check;

    cout << "Enter Array Size: ";
    cin >> arrSize;
    int number[arrSize];

    for (int x = 0; x < arrSize; x++)
    {
        cout << "Enter Number " << x + 1 << ": ";
        cin >> number[x];
    }

    for (int x = 0; x < arrSize; x++)
    {
        int num = number[x];
        while (num > 0)
        {
            if (num % 10 == 7)
            {
                cout << "Boom!";
                check = true;
                break;
            }
            else
            {
                check = false;
            }
            num = num / 10;
        }
        if (check == true)
        {
            break;
        }
    }
    if (check == false)
    {
        cout << "there is no 7 in the array";
    }
}