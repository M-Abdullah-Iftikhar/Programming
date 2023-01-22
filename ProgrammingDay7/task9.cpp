#include <iostream>
using namespace std;

main()
{
    int num, num2;
    cout << "Enter Desired number of rows: ";
    cin >> num;
    num2 = num * 2;

    for (int x = 1; x <= num; x++)
    {
        for (int y = 1; y <= num2; y++)
        {
           
            if (y <= x)
            {
                cout << "*";
            }
            else if ((y >= (num2-x)) && (y < num2))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    cout<<endl;
    }
}