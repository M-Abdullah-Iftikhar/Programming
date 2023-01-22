#include <iostream>
using namespace std;

void add(int num1,int num2);
void multiply(int num1,int num2);
void subtract(int num1,int num2);
void divide(int num1,int num2);

void mainUI();

main(){
while(true){
mainUI();
cout<<endl;
}
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
char symbol;


cout<<"Enter 1st number: ";
cin>>num1;

cout<<"Enter Operator: ";
cin>>symbol;

cout<<"Enter 2nd number: ";
cin>>num2;

if(symbol=='+'){

add(num1,num2);
}
if(symbol=='-'){

subtract(num1,num2);

}
if(symbol=='*'){

multiply(num1,num2);

}
if(symbol=='/'){

divide(num1,num2);

}


}