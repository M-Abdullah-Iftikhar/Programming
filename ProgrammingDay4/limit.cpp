#include <iostream>
using namespace std;



void speedl(float);

main(){
	int num1;
	int num2;
	int num3;


	float dollars1;
	float dollars2;
	float dollars3;

	cout<<"Enter No. of Red Roses Sold: ";
	cin>>num1;
	cout<<"Enter No. of white Roses Sold: ";
	cin>>num2;
	cout<<"Enter No. of Tulips Sold: ";
	cin>>num3;

	dollars1=num1*2;	
	dollars1=num2*4.1;
	dollars1=num3*2.5;

	
}




void speedl(float speed){

	if (speed>100){
	cout<<"Halt....YOU WILL BE CHALLANED!!!";
	}


	if (speed<=100){
	cout<<"Perfect! You're going good";
	}


}