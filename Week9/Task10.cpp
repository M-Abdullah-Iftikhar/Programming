#include <iostream>
using namespace std;

main()
{

    int number;
    int count = 0;
    cout << "Enter a Number: ";
    cin >> number;
    int number1 = number;
    for (int y = 0; number1 > 0; y++)
    {

        count++;
        number1 = number1 / 10;
    }
    cout << count << endl;
    int number2[count];
    number1 = number;
    int count2 = count;
    for (int y = 0; number1 > 0; y++)
    {
        number2[count2 - 1] = number1 % 10;
        cout << number2[count2 - 1];

        number1 = number1 / 10;
        count2--;
    }
}