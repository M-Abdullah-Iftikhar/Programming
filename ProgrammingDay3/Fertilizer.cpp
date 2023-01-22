#include <iostream>
using namespace std;


main(){
   float sizeP;
   float costB;
   float area;

   cout<<"Enter Bag size in pounds: ";
   cin>>sizeP;
   cout<<"Enter cost of the bag: ";
   cin>>costB;
   cout<<"Enter area covered by each bag in square foot: ";
   cin>>area;

  cout<<"Cost of the fertilizer per pound: "<<costB/sizeP<<endl;
  cout<<"Cost of fertilizing the area per square feet: "<<costB/area;
    


}