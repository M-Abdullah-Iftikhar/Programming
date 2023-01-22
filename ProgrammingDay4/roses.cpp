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

	float result;

	cout<<"Enter No. of Red Roses Sold: ";
	cin>>num1;
	cout<<"Enter No. of white Roses Sold: ";
	cin>>num2;
	cout<<"Enter No. of Tulips Sold: ";
	cin>>num3;

	dollars1=num1*2;	
	dollars2=num2*4.1;
	dollars3=num3*2.5;

	result=dollars1+dollars2+dollars3;

	cout<<"Original Price: "<<result;

	cout<<endl;

	if (result>200){

	cout<<"Price After Discount: "<<result-(result*0.2);

	}
}

	





