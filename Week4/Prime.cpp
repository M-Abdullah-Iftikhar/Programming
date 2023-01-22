#include <iostream>
using namespace std;


main(){

int num1;
int num2=2;
int f=1;

cout <<"Enter a number: ";
cin>> num1;
 while (num2<num1){

 if(num1%num2==0)
 {
  f=0;
 }
num2++;
                  }
if (f==0){
cout<<"its not a prime number";
}
 
if (f==1){
cout<<"its a prime number";
}

}
