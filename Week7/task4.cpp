#include <iostream>
using namespace std;

void digits();
main()
{
    digits();
}

void digits()
{
    int num,digit,num1,x=0;
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit: ";
    cin >> digit;


    while(num>0){
	if(num%10 ==digit){
	x++;
	}
        num1=num/10;
        num=num1;

        
    }
    cout<<x;
}