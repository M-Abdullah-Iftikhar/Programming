#include <iostream>
using namespace std;

//smallest number from array


main()
{

    int number;

    int count = 0;
    int num1,num2 = 0;

    cout << "Enter a Range: ";
    cin >> number;

    for (int x = 0; x < number; x++)
    {
        cout << "Enter 1 number: ";
        cin >> num1;
        
        if (num1 < num2)
        {
            num2 = num1;
        }
        else if(num2 == 0){
            num2 = num1;
        }
    }
    cout<<num2;
}