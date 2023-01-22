#include <iostream>
using namespace std;

void digits();
main()
{
    digits();
}

void digits()
{
    int num;
    int num1;
    int x=0;
    cout << "Enter a number: ";
    cin >> num;
    while(num>0){
        num1=num/10;
        num=num1;
        x++;
    }
    cout<<x;
}