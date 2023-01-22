# include <iostream>
using namespace std;

int greaterr();

main(){
    int num;
num =greaterr();

cout<<num<<" is greater";

}

int greaterr(){
	int num1, num2, num3;
	int num;

	cout<<"Enter Number 1: ";
	cin>>num1;

	cout<<"Enter Number 2: ";
	cin>>num2;

	cout<<"Enter Number 3: ";
	cin>>num3;

	if(num1>num2){
	if(num1>num3){
	num=num1;
	}
	}
	if(num2>num1){
	if(num2>num3){
	num=num2;
	}
	}
	if(num3>num2){
	if(num3>num1){
	num=num3;
	}
	}
return num;
}