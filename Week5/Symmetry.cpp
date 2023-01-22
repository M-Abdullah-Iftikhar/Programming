#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

bool isSymmetry(int num);



main(){
	bool symmetry;
	system("cls");
	int num;
	
	cout<<"Enter a five digit number: ";
	cin>>num;
	symmetry = isSymmetry(num);

	if(symmetry == true){
	cout<<"its a symmetrical number";
	}
	if(symmetry == false){
	cout<<"its not a symmetrical number";
	}


	
	}


bool isSymmetry(int num){
		
	int p1,p2,p3,p4,p5;

	p1=num%10;
	p2=(num/10)%10;
	p3=(num/100)%10;
	p4=(num/1000)%10;
	p5=(num/10000)%10;
	
	if(p1==p5){
	if(p2==p4){

	return true;
	}

	}
	if(p1!=p5){
	if(p2!=p4){


	return false;
	}
	
	}
		



	}