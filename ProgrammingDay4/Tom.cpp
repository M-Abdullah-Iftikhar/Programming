#include <iostream>
using namespace std;





main(){
	int holidays,hr;
	int working,minn;
	int minutes;
	int exhours;


	cout<<"Number of holidays: ";
	cin>>holidays;

	working = 365-holidays;

	minutes= (working *63)+(holidays*127);



	cout<<"	Tom played Hours: "<<minutes/60<<"hours";

cout<<endl;

        exhours=(30000-minutes)/60;
       minn=(30000-minutes)%60;


	if(exhours>0){

	cout<<"Tom Sleeps well "<<exhours<<" hours "<<minn<<" minutes less for play";
}
        exhours=30000-minutes;

	if(exhours<0){

	cout<<"Tom will run away "<< (exhours/60) *-1 <<" hours "<<minn*-1<<" minutes for play";
}



}

