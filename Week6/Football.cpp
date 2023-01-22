#include <iostream>
using namespace std;

main()
{
    float budget, people;
    string catagory;
    float required;

    cout << "Enter Budget(1,000-1,000,000): ";
    cin >> budget;

    cout << "Enter catagory: ";
    cin >> catagory;

    cout << "Enter Numbr of people(1-200): ";
    cin >> people;

    if (catagory == "VIP")
    {

        if (people > 0 && people <= 4)
        {
            budget = budget - (budget * 0.75);
        
            required = 499.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}
        
        }

        else if (people >= 5 && people <= 9)
        {
            budget = budget - (budget * 0.6);
            required = 499.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }

        else if (people >= 10 && people <= 24)
        {
            budget = budget - (budget * 0.5);
            required = 499.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }

        else if (people >= 25 && people <= 49)
        {
            budget = budget - (budget * 0.4);
            required = 499.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }

        else if (people >= 50)
        {
            budget = budget - (budget * 0.25);
            required = 499.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }
    }
 if (catagory == "normal")
    {

        if (people > 0 && people <= 4)
        {
            budget = budget - (budget * 0.75);
        
            required = 249.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}
        
        }

        else if (people >= 5 && people <= 9)
        {
            budget = budget - (budget * 0.6);
            required = 249.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }

        else if (people >= 10 && people <= 24)
        {
            budget = budget - (budget * 0.5);
            required = 249.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }

        else if (people >= 25 && people <= 49)
        {
            budget = budget - (budget * 0.4);
            required = 249.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }

        else if (people >= 50)
        {
            budget = budget - (budget * 0.25);
            required = 249.99*people;
            if (required < budget){
                budget = budget - required;
                cout<<"You have "<<budget<<" Leva left";
            }else if(required > budget){
                budget = required - budget;
                cout<<"Not Enough money! You need "<<budget<<" Leva";
            }else {}        
        }
    }



}