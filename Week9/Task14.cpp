#include <iostream>
using namespace std;

main()
{
    int arrSize;
    int number2;
    float totalR = 0;

    cout << "Enter Number of Resistors: ";
    cin >> arrSize;

    int number[arrSize];

    for (int x = 0; x < arrSize; x++)
    {
        cout << "Enter Resistor "<<x+1<<": ";
        cin >> number[x];

        totalR = totalR+number[x];

    }

    cout<<"Total Resistance is: "<<totalR;
}