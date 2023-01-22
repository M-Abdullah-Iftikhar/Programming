#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


int add(int,int);

main(){

	int num1,num2,result;

cout<<"Enter 1st number: ";
cin>>num1;

cout<<"Enter 2nd number: ";
cin>>num2;
	
	system("cls");

	result=add(num1,num2);
	cout<<"Answer :"<<result;

	cout<<endl;
	if(num1>num2)
	{
	cout<<num1<<" is greater than "<<num2;

	}
	if(num2>num1)
	{
	cout<<num2<<" is greater than "<<num1;

	}
}


int add(int num1,int num2){

	int sum = num1+num2;
	return sum;

	}