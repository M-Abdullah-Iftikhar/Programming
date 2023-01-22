#include <iostream>
using namespace std;


int add(int,int);

main(){

	int num1,num2;
	int result;

cout<<"Enter 1st number: ";
cin>>num1;

cout<<"Enter 2nd number: ";
cin>>num2;

	result=add(num1,num2);
	cout<<"Sum is "<<result;
	
	}

int add(int num1,int num2){
	
	int sum=num1+num2;
	return sum;
	

	}