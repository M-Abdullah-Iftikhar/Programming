#include <iostream>
using namespace std;

main(){
    int numberN;
    string time;
    float texi1, texi2, bus, train;

    cout << "Enter total KMs: ";
    cin >> numberN;

    cout << "Enter Time of day: ";
    cin >> time;
    cout<<endl;

    texi1 = (numberN * 0.79)+0.7;
    texi2 = (numberN * 0.90)+0.7;

	bus = 0.09*numberN;
    train= 0.06*numberN;
    if(time == "day" && numberN < 20){
        cout<<texi1;

    }

    else if(time == "night" && numberN < 20){
        cout<<texi2;

    }

else if(time == "day" || time == "night" && numberN > 20 && numberN<=100){
        cout<<bus;

    }
else if (time == "day" || time == "night" && numberN > 100){
        cout<<train;

    }	else {
	}

}