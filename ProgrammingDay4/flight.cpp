#include <iostream>
using namespace std;



void fly(string,float);

main(){

	string country;
	float dollars;
while(true){
	cout<<"Enter country Name: ";
	cin>>country;

	cout<<"Enter ticket price: ";
	cin>>dollars;

	fly(country,dollars);

cout <<endl;
}

	
	
} 


void fly(string country,float dollars){

	if (country=="pakistan"){
	cout<<"Price is :"<<dollars-(dollars*0.05)<<"$";
	}

	if (country=="ireland"){
	cout<<"Price is :"<<dollars-(dollars*0.1)<<"$";
	}
	if (country=="india"){
	cout<<"Price is :"<<dollars-(dollars*0.2)<<"$";
	}
	if (country=="england"){
	cout<<"Price is :"<<dollars-(dollars*0.3)<<"$";
	}
	if (country=="canada"){
	cout<<"Price is :"<<dollars-(dollars*0.45)<<"$";
	}



}