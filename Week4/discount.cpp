#include <iostream>
using namespace std;

void calculateBill(string day, int amount);


main(){
while(true){

string day;
int amount;

cout<<"Enter day: ";
cin >> day;

cout<<"Enter Purchase amount: ";
cin>>amount;


calculateBill(day, amount);

}

}

void calculateBill(string day, int amount){

if (day == "sunday")
 {

 cout<<"Payable amount: "<<amount-(amount*(0.1));

 }

if (day != "sunday")
 {

 cout<<"Payable amount: "<<amount-(amount*(0.05));

 }

}