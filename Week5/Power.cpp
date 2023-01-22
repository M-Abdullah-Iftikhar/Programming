#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


int add(int,int);

main(){
	
	system("cls");

	float num1,num2;

	double result;

cout<<"Enter 1st number: ";
cin>>num1;

cout<<"Enter 2nd number: ";
cin>>num2;
	
	cout<<endl<<endl;

	result=add(num1,num2);
	cout<<"Answer :"<<result<<endl;

	result=max(num1,num2);

	cout<<result<<" is greater"<<endl;
	
	result=min(num1,num2);

	cout<<result<<" is Smaller"<<endl;
	
	result = pow(num1,num2);
	cout << "Power is: " << result << endl;
	
	result = sqrt(num1);
	cout << "Square root is: " <<result <<endl;

	result=cbrt(num2);
	cout << "Cube root is: " <<result <<endl;

	result=ceil(num1);
	cout <<"Ceil is: " <<result <<endl;

	result=floor(num2);
	cout <<"Floor is: " <<result;

	



	}


int add(int num1,int num2){

	int sum = num1+num2;
	return sum;

	}