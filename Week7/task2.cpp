#include <iostream>
using namespace std;

void fibonaci();
main()
{
    fibonaci();
}

void fibonaci()
{
    int num, n1 = 0, n2 = 1, sum;
    cout << "Enter a number: ";
    cin >> num;
    cout << n1 << endl;
    cout << n2 << endl;

    for (int x = 0; x < num; x++)
    {

        sum = n1 + n2;
        cout << sum << endl;
        n1 = n2;
        n2 = sum;
    }
}