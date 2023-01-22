#include <iostream>
using namespace std;

int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int gcd);

main()
{

    int num1, num2, hcf, lcm;

    cout << "Enter 1st Number: ";
    cin >> num1;

    cout << "Enter 2nd Number: ";
    cin >> num2;

    hcf = calculateGCD(num1, num2);

    lcm = calculateLCM(num1, num2, hcf);

    cout << "HCF is: " << hcf << endl;
    cout << "LCM is: " << lcm << endl;
}

int calculateGCD(int num1, int num2)
{
    int hcf;

    if (num2 > num1)
    {
        for (int x = 1; x < num2; x++)
        {
            if (num1 % x == 0 && num2 % x == 0)
            {
                hcf = x;
            }
        }
    }
    else if (num1 > num2)
    {
        for (int x = 1; x < num1; x++)
        {
            if (num1 % x == 0 && num2 % x == 0)
            {
                hcf = x;
            }
        }
    }
    return hcf;
}

int calculateLCM(int num1, int num2, int gcd)
{

    int lcm = (num1 * num2) / gcd;

    return lcm;
}