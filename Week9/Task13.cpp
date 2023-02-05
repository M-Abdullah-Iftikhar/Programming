#include <iostream>
using namespace std;

main()
{
    int arrSize;
    int number2;

    cout << "Enter Arrey Size: ";
    cin >> arrSize;

    int number[arrSize];

    for (int x = 0; x < arrSize; x++)
    {
        cout << "Enter a Number: ";
        cin >> number[x];
    }

    cout << "Enter a Number to be Multiplied: ";
    cin >> number2;

    for (int x = 0; x < arrSize; x++)
    {

        cout<<number2*number[x]<<endl;
    }
}