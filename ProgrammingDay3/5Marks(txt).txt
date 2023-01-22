#include <iostream>
using namespace std;


main(){
   float Eng;
   float Phy;
   float Math;
   float Chem;
   float Bio;
   float total;

   cout<<"Enter English Marks: ";
   cin>> Eng;
   cout<<"Enter Physics Marks: ";
   cin>> Phy;
   cout<<"Enter Mathematics Marks: ";
   cin>> Math;
   cout<<"Enter Chemistry Marks: ";
   cin>> Chem;
   cout<<"Enter Biology Marks: ";
   cin>> Bio;

   total=Eng+Phy+Math+Bio+Chem;

  cout<<"Obtained Marks: "<<total<<endl;
  cout<<"Your Percentage is: "<<(total/500)*100;



}