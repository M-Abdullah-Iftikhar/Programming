#include <iostream>
using namespace std;

main()
{
    int arrSize;

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

        cout << "Number " << x + 1 << " is: " << number[x] << endl;
    }
}