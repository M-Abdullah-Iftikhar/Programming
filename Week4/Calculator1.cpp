#include <iostream>
using namespace std;

void add(int num1,int num2);
void multiply(int num1,int num2);
void subtract(int num1,int num2);
void divide(int num1,int num2);

void mainUI();

main(){
mainUI();

}

void add(int num1,int num2){

cout<<"Answer: "<<num1 + num2;
}
void multiply(int num1,int num2){

cout<<"Answer: "<<num1 * num2;
}
void subtract(int num1,int num2){

cout<<"Answer: "<<num1 - num2;
}
void divide(int num1,int num2){

cout<<"Answer: "<<num1 / num2;
}


void mainUI(){
int num1;
int num2;
char operator;


cout<<"Enter 1st number: ";
cin>>num1;

cout<<"Enter Operator: ";
cin>>operator;

cout<<"Enter 2nd number: ";
cin>>num2;

if(operator==+){

add(num1,num2);
}
if(operator==-){

subtract(num1,num2);

}
if(operator==*){

multiply(num1,num2);

}
if(operator==/){

divide(num1,num2);

}


}