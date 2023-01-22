#include <iostream>
using namespace std;




main(){
	int num;
	int num1;
	int num2;
	int num3;

    cout<<"Enter a 3 digit number: ";
	cin >>num;

	num1=num%10;
	num2=(num/10)%10;	
	num3=(num/100)%10;

	if((num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3)==num)
 {

	cout<<"Its an amrstrong number";
 }	else {
	cout<<"Its not an amrstrong number";
             }	
     }