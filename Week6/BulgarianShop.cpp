#include <iostream>
using namespace std;
 
float checkCost(string city, string product, int quantity);

 main(){

    string city, product;
    int quantity;
    float cost;

    cout<<"Enter city name: ";
    cin>>city;

    cout<<"Enter Product Name: ";
    cin>>product;

    cout<<"Enter Quantity Sold: ";
    cin>>quantity;

    cost = checkCost(city, product, quantity);
    cout<<endl;
    cout<<cost;
    

 }

 float checkCost(string city, string product, int quantity){

    float result;


    if (city == "sofia" && product == "coffee"){
        result = quantity * 0.5; 
    }
     else if (city == "sofia" && product == "water"){
        result = quantity * 0.8; 
    }
  else if (city == "sofia" && product == "beer"){
        result = quantity * 1.2; 
    }
   else if (city == "sofia" && product == "sweets"){
        result = quantity * 1.45; 
    }
   else if (city == "sofia" && product == "peanuts"){
        result = quantity * 1.6; 
    }
   else if (city == "plovdiv" && product == "coffee"){
        result = quantity * 0.4; 
    }
   else if (city == "plovdiv" && product == "water"){
        result = quantity * 0.7; 
    }
   else if (city == "plovdiv" && product == "beer"){
        result = quantity * 1.15; 
    }
   else if (city == "plovdiv" && product == "sweets"){
        result = quantity * 1.3; 
    }
   else if (city == "plovdiv" && product == "peanuts"){
        result = quantity * 1.5; 
    }
   else if (city == "varna" && product == "coffee"){
        result = quantity * 0.45; 
    }
   else if (city == "varna" && product == "water"){
        result = quantity * 0.7; 
    }
   else if (city == "varna" && product == "beer"){
        result = quantity * 1.1; 
    }
   else if (city == "varna" && product == "sweets"){
        result = quantity * 1.35; 
    }
   else if (city == "varna" && product == "peanuts"){
        result = quantity * 1.55; 
    }
    else {return 0;
    }
    return result;

 }