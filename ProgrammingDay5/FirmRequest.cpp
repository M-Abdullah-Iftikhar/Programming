#include <iostream>
using namespace std;

main(){
    int hours,AvHours,leftHours;
    int days;
    int workers;

    cout<<"Enter needed Hours(0-200000): ";
    cin>>hours;

    cout<<"Enter Days required(0-20000): ";
    cin>>days;

    cout<<"Enter Workers Available(0-200): ";
    cin>>workers;

  //  days=days-(days*0.1);
	

    AvHours=(days*9)*workers;

    if(AvHours>hours){
        leftHours=AvHours-hours;
        cout<<"Yes! "<<leftHours<<" hours are left";

    }
    if(hours>AvHours){
        leftHours=hours-AvHours;
        cout<<"Not Enough Time! "<<leftHours<<" Additional hours are required";

    }



    
}