#include <iostream>
using namespace std;

main(){

string name;
double inter;
double metric;
double ecat;
double resultInter;
double resultMetric;
double resultEcat;


cout<<"Enter Your Name: ";
cin>>name;
cout<<"Enter Intermediate Marks: ";
cin>> inter;
cout<<"Enter Metric Marks: ";
cin>>metric;
cout<<"Enter E.Cat Marks: ";
cin>>ecat;

resultInter= (inter/550)*40;
resultMetric= (metric/1100)*10;
resultEcat=(ecat/400)*50;


cout<<"Your Name is "<<name<<endl;
cout<<"Your Agregate is "<<resultInter+resultMetric+resultEcat;
cout<<"";
cout<<"";
cout<<"";



}