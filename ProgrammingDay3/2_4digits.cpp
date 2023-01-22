#include <iostream>
using namespace std;


main(){
   
   int num11;
   int num22;

   float num1;
   float num2;
   float num3;
   float num4;

   

   cout<<"Enter 1st 4 digit number: ";
   cin>>num11;
   cout<<"Enter 2nd 4 digit number: ";
   cin>>num22;

   num4=num22%10;
   num3=(num11/10)%10;
   num2=(num22/100)%10;
   num1=(num11/1000)%10;

  cout<<"Result: "<<(num1+num3)+(num2*num4);
   
}