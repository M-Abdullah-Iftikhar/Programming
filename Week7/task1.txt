#include <iostream>
using namespace std;

main()
{
    int num;
    int sum=0;

    cout << "Enter a number: ";
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        sum = sum + x;;
    }
    cout << sum;
}
