#include <iostream>
using namespace std;

main()
{   
    string movie;
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombRider"};
    float price;
    int index;

    cout << "Enter movie name: ";
    cin >> movie;
    


    for (int x = 0; x < 5; x++)
    {
        if (movies[x]== movie)
        {
            index = x;
        }
    }
    if(index % 2 == 0)
    {
        price = 450;
    cout<<"Price: "<<price;
    }
       else if(index % 2 != 0)
    {
        price = 475;
    cout<<"Price: "<<price;
    }
}