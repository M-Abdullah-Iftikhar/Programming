#include <iostream>
using namespace std;

main()
{
    int arrSize;
    int transTime;

    cout << "Enter Array Size: ";
    cin >> arrSize;
    int number[arrSize];

    for (int x = 0; x < arrSize; x++)
    {
        cout << "Enter Number " << x + 1 << ": ";
        cin >> number[x];
    }

    cout << "Enter Transform Time: ";
    cin >> transTime;

    for (int x = 0; x < arrSize; x++)
    {
        if(number[x]%2 == 0)
        {
            cout<<number[x]-(2*transTime)<<" ";
        }
        if(number[x]%2 != 0)
        {
            cout<<number[x]+(2*transTime)<<" ";
        }
       
    }
}