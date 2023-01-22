#include <iostream>
using namespace std;

void StudentDetails(string name,int marks,string nation,float aggregade,char section);


main(){

string name1;
int marks1;
string nation1;
float aggregade1;
char section1;

cout<<"Enter Your Name: ";
cin>>name1;

cout<<"Enter your marks: ";
cin>>marks1;

cout<<"enter your nationality: ";
cin>>nation1;

cout<<"Enter your Aggrigade: ";
cin>>aggregade1;

cout<<"Enter Your Section: ";
cin>>section1;

cout<<endl;

StudentDetails(name1,marks1,nation1,aggregade1,section1);
}

void StudentDetails(string name,int marks,string nation,float aggregade,char section){

cout<<"Your Name is "<<name<<endl;
cout<<"Your marks are "<<marks<<endl;
cout<<"Your Nationality is "<<nation<<endl;
cout<<"Your Aggregade is "<<aggregade<<endl;
cout<<"Your Section is "<<section<<endl;

}