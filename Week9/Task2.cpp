#include <iostream>
using namespace std;

main()
{
    int arrSize;
   
    float sum = 0;

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

        sum = sum + number[x];
    }
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << sum / arrSize;
}