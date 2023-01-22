#include <iostream>
using namespace std;


main(){

   
   int num;
   float num1;
   float num2;
   float num3;
   float num4;
   float result;

  cout<<Enter a Four Digit Number: ";
  cin>>num;

  num1=num%10;
  num2=(num/10)%10;
  num3=(num/100)%10;
  num4=(num/1000)%10;
  
  result=num1+num2+num3+num4;

 cout<<"Answer: "<<result;


  cout<<
  
    


}