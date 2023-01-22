#include <iostream>
using namespace std;


main(){

   
  float priceV;
  float priceF;
  int KGV;
  int KGF;

  float resultF;
  float reseltV;

  cout<<"Vegitables Price(coins) per Kg: ";
  cin>>priceV;
  cout<<"Fruit Price(coins) per Kg: ";
  cin>>priceF;

  cout<<"Vegitables Sold(Kg): ";
  cin>>KGV;
  cout<<"Fruits Sold(Kg): ";
  cin>>KGF;

  resultF= (priceV/KGF)/1.94;
  resultV= (priceF/KGV)/1.94;


 cout<<"Total Profit: "<<resultV+resultF;
  


    


}