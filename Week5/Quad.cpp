#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;





main(){
	
	system("cls");
	float a=5,b=6,c=1;
	
	cout<<"Enter coeeficient of x^2: ";
	cin>>a;
	
	cout<<"Enter coeeficient of x: ";
	cin>>b;

	cout<<"Enter constant: ";
	cin>>c;
	
	
	float result1, result2;

	result1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	result2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

	cout<<"Answer 1: "<<result1<<endl;
	cout<<"Answer 2: "<<result2;
	



	}
