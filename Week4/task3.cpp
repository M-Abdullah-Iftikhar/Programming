#include <iostream>
using namespace std;

void pass(int);
void fail(int);



main(){

int marks;

cout<<"Enter Your Marks";
cin>>marks;

pass(marks);
fail(marks);

}

void pass(int num1){
if (num1>=50){
  

cout<<"Great, You passed";
}}

void fail(int num1){
if (num1<50){

cout<<"You Failed";
}}