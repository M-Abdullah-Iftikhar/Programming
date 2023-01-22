#include <iostream>
using namespace std;

float calculateMoney(int age, int priceM, int priceT);

main()
{
    int num;
    cout << "Enter Desired number of rows: ";
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        for (int y = num; y >= x; y--)
        {
            cout << "*";
        }
        cout << endl;
    }
}