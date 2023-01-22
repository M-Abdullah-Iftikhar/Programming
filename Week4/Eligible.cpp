#include <iostream>
using namespace std;

void eligible(int age);

main(){
int age;

while (true){
cout<<"Enter Your Age: ";
cin>> age;


eligible(age);
cout<<endl;
}

}

void eligible(int age){
if(age>=18){
cout<<"You are Eligible for vote";
}
if(age<18){
cout<<"You are not eligible for vote";
}
}