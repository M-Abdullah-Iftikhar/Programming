#include <iostream>
using namespace std;

main(){


	int hour;
	int minute;
	int R1=0;
	


	cout << "Enter Hour(0-23): ";
	cin >> hour;

	cout << "Enter minutes: ";
	cin >> minute;
	if (minute>44){
	R1=minute-45;
	
	}
	minute=minute+15;


	if (minute>59){
	hour=hour+1;
	minute=0;
	}


	minute=minute+R1;
	
	if (hour>23){
	hour=0;
	}

	cout<<hour<<":"<<minute;

}
	
