#include <iostream>
using namespace std;

main()
{
    int num, num1, x = 1;
    float p1 = 0, p2 = 0, p3 = 0;
    

    cout << "Enter Number Count: ";
    cin >> num;

    while (num >= x)
    {
        cout << "Enter a Number: ";
        cin >> num1;

        if (num1 % 2 == 0)
        {
            p1++;
        }
        if (num1 % 3 == 0)
        {
            p2++;
        }
        if (num1 % 4 == 0)
        {
            p3++;
        }
        else
        {
            x++;
            continue;
        }
        x++;
    }
    

    p1 = (p1 / num) * 100;
    p2 = (p2 / num) * 100;
    p3 = (p3 / num) * 100;


    cout << "Divisible By 2: " << p1 << "%" << endl;
    cout << "Divisible By 3: " << p2 << "%" << endl;
    cout << "Divisible By 4: " << p3 << "%"<<endl;
}