#include <iostream>
using namespace std;

main()
{
    int num, ton, x = 1;
    float bus = 0, truck = 0, train = 0;
    float avgCargo;
    float avgPrice;

    cout << "Enter Number of Transportations: ";
    cin >> num;

    while (num >= x)
    {
        cout << "Enter tons of current cargo: ";
        cin >> ton;
        if (ton <= 3)
        {
            bus=bus + ton;;
        }
        else if (ton > 3 && ton <= 11)
        {
            truck = truck + ton;
        }
        else if (ton > 11)
        {
            train = train + ton;
        }
        x++;
    }
    avgCargo = train + bus + truck;
    avgPrice = ((bus * 200) + (truck * 175) + (train * 120)) / avgCargo;

    cout<<"Average Price: "<<avgPrice<<endl;
    cout<<"Percentage of Cargo by MiniBus: "<<(bus/avgCargo)*100<<endl;
    cout<<"Percentage of Cargo by Truck: "<<(truck/avgCargo)*100<<endl;
    cout<<"Percentage of Cargo by Train: "<<(train/avgCargo)*100<<endl;
}