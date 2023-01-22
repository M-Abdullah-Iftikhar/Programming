#include <iostream>
using namespace std;

main(){

double num1;
double num2;
double num3;
double num4;
double num5;
double num6;
double num7;
double num8;
double num9;
double num10;


double result1;
double result2;
double result3;
double result4;

double result;


cout<<"Enter 1st Number: ";
cin>>num1;
cout<<"Enter 2nd Number: ";
cin>>num2;
cout<<"Enter 3rd Number: ";
cin>>num3;
cout<<"Enter 4th Number: ";
cin>>num4;
cout<<"Enter 5th Number: ";
cin>>num5;
cout<<"Enter 6th Number: ";
cin>>num6;
cout<<"Enter 7th Number: ";
cin>>num7;
cout<<"Enter 8th Number: ";
cin>>num8;
cout<<"Enter 9th Number: ";
cin>>num9;
cout<<"Enter 10th Number: ";
cin>>num10;

result1=num1+num2+num8+num9;
result2=num6-num5;
result3=num7/num3;
result4=num4*num10;


cout<<"Result1: "<<result1<<endl;

cout<<"Result2: "<<result2<<endl;
cout<<"Result3: "<<result3<<endl;
cout<<"Result4: "<<result4<<endl;

//result = result1+result2+result3+result4;
result = (num1+num2+num8+num9)+(num6-num5)+(num7/num3)+(num4*num10);

cout<<"Result: "<<result;

}