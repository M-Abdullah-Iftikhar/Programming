#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter Desired number of rows: ";
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        for (int y = num; y > x; y--)
        {
            cout << " ";
        }

        for (int y = 1; y <= x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int x = 1; x <= num; x++)
    {
        for (int y = num; y >= x; y--)
        {
            cout << "*";
        }
        cout << endl;

        for (int y = 1; y <= x; y++)
        {
            cout << " ";
        }
    }

    cout << endl;
}
