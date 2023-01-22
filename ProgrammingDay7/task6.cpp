#include <iostream>
using namespace std;

main()
{

    int days;
    int x = 1;
    int petients;
    int doc = 7;
    int treated = 0;
    int unTreated = 0;

    cout << "Enter period: ";
    cin >> days;

    while (x <= days)
    {
         if (x % 3 == 0 && treated<unTreated){
           doc++;
        }
        cout << "Enter petients: ";
        cin >> petients;
        if (petients <= doc)
        {
            treated = treated + petients;
        }
        else if (petients > doc)
        {

            treated = treated + doc;
            unTreated = unTreated + (petients - doc);
        }
       
        x++;
    }
    cout << "Treated Petients: " << treated << endl;
    cout << "Untreated Petients: " << unTreated;
}