#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


float hight(float,float);


main(){
	
	system("cls");
	float resultT, result;

	float angle;
	float length;
	
	cout<<"Enter angle (Degrees) ";
	cin >> angle;

	cout<<"Enter base length: ";
	cin>> length;
	
	result = hight(angle, length);
	
	cout<<"Length is: "<<result;
	



	}
float hight(float angle, float length){
	
	
	angle=angle/57.2958;

	float resultT=tan(angle);
	
	float result=resultT * length;

	return result;

	}

