#include <iostream>
using namespace std;

main()
{
    int num,x=1;
    int num1,num2=0;
    cout << "Enter a number: ";
    cin >> num;

    while (num1>0)
    {
        num1=(num/x)%10;
        num2=num1+num2;
        x=x*10;
    }
    cout<<num2;
}