#include <iostream>
using namespace std;

void greater1(int num1, int num2);
void smaller(int num1,int num2);
void isEqual(int num1,int num2);


main(){
while(true){
int num1;
int num2;
int choice;

cout<<"Enter a number: ";
	cin>>num1;

cout<<"Enter 2nd number: ";
	cin>>num2;

cout<<"Enter Choice(1,2,3): "; 
cin>>choice;

if(choice==1){
greater1(num1,num2);

cout<<endl;
}
if (choice ==2){
smaller(num1,num2);

}
	if (choice==3){
		isEqual(num1,num2);


}
cout<<endl;
}
}



void greater1(int num1, int num2){
	if(num1>num2){

		cout<<"Greater number is "<<num1;
}
	if(num2>num1){

		cout<<"Greater number is "<<num2;
}
}

void smaller(int num1,int num2){
	if(num1<num2){

		cout<<"Smaller number is "<<num1;
}
if(num2<num1){

cout<<"Greater number is "<<num2;
}
}

void isEqual(int num1,int num2){
if(num1==num2){

cout<<"Numbers are equal ";
}

}