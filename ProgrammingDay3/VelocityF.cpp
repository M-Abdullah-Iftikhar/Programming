#include <iostream>
using namespace std;


main(){
   float velocityI;
   float acc;
   float time;
   float result;

   cout<<"Enter Initial Velocity: ";
    cin>>velocityI;
   cout<<"Enter Acceleration: ";
    cin>>acc;
   cout<<"Enter Time: ";
    cin>>time;

    result=velocityI + (acc*time);

   cout<<"Final Velocity is: "<<result;



}