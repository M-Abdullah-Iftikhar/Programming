#include <iostream>
using namespace std;

void even(int num);
main(){
int num;

while(true){

cout<<"Enter a number: ";
cin>> num;
 
even(num);
cout<<endl;

 }
}




void even(int num){
if(num%2==0)
 {

cout<<"Its an Even function";
 }
if(num%2!=0)
 {

cout<<"Its an odd function";
 }

}