#include <iostream>
using namespace std;

void add(int num1,int num2);
void multiply(int num1,int num2);
void subtract(int num1,int num2);
void divide(float num1,float num2);

void mainUI();

main(){

while(true){
mainUI();
cout<<endl<<endl;
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
void divide(float num1,float num2){

cout<<"Answer: "<<num1 / num2;
}
void mainUI(){
float num11;
float num22;
char symbol;


cout<<"Enter 1st number: ";
cin>>num11;

cout<<"Enter Operator(+,-,/,*): ";
cin>>symbol;

cout<<"Enter 2nd number: ";
cin>>num22;

if(symbol=='+'){

add(num11,num22);
}
if(symbol=='-'){

subtract(num11,num22);

}
if(symbol=='*'){

multiply(num11,num22);

}
if (symbol=='/'){

divide(num11,num22);

}
}