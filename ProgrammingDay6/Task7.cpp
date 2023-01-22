#include <iostream>
using namespace std;

main()
{
    int hour, hour1, hour2, minute, minute1, minute2;

    cout << "Enter Exam starting hour(0-23): ";
    cin >> hour1;

    cout << "Enter Exam starting minutes(0-59)";
    cin >> minute1;

    cout << "Enter Arrival hour(0-23): ";
    cin >> hour2;

    cout << "Enter Arrival minutes(0-59)";
    cin >> minute2;

    hour1=hour1*60;
    minute1=minute1+hour1;

    hour2=hour2*60;
    minute2=minute2+hour2;

    if(minute1>minute2){
       minute = minute1-minute2;
       if(minute <=30){
       cout<<"On time"<<endl;
       cout<<minute/60<<" hours: "<<minute%60<<"minutes Early";
       }
       else if (minute>30){
        cout<<minute/60<<" hours: "<<minute%60<<"minutes Early "<<endl;

       }
	}
       if (minute2>minute1){
        minute = minute2-minute1;
        cout<<minute/60<<" hours: "<<minute%60<<" minutes late";
       }
	if(minute1==minute2){
	cout<<"On Time";
}

    }

