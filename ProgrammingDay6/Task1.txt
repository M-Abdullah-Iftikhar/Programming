#include <iostream>
using namespace std;

main()
{
    string temp, humidity;

    cout << "Enter Temprature: ";
    cin >> temp;
    cout << "Enter Humidity ";
    cin >> humidity;

    if (temp == "warm" && humidity == "dry")
    {
        cout << "Play tennis";
    }

    else if (temp == "warm" && humidity == "humid")
    {
        cout << "swim";
    }

    else if (temp == "cold" && humidity == "dry")
    {
        cout << "play basketball";
    }

    else if (temp == "cold" && humidity == "humid")
    {
        cout << "Watch TV";
    }
}
