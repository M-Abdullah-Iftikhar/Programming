#include <iostream>
using namespace std;

string genderF(string name, int age);

main(){

	string gender;
	int age;

	cout<<"Enter Gender: ";
	cin>>gender;
	cout<<"Enter age: ";
	cin>>age;
	string result = genderF(gender,age);
	
	cout<<endl;
	cout<<result;
	
}

string genderF(string gender, int age){

	
	if(gender == "male"&& age>=16){
		return "Mr.";
	}
	if(gender == "male"&& age<16){
		return "Master.";
	}
	if(gender == "female"&& age>=16){
		return "Ms.";
	}
	if(gender == "male"&& age<16){
		return "Miss.";
	}
