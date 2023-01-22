#include <iostream>
using namespace std;

main()
{
    double length, width, height, volume;
    string prefix;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter Height: ";
    cin >> height;

    cout << "Enter a prefix: ";
    cin >> prefix;

    volume = (length * width * height) / 3;

    if (prefix == "kilometers")
    {
        cout << "Volume of the Pyramid is: " << volume / 1000000000;
    }
    if (prefix == "meters")
    {
        cout << "Volume of the Pyramid is: " << volume;
    }
    if (prefix == "centimeters")
    {
        cout << "Volume of the Pyramid is: " << volume * 1000000;
    }
    if (prefix == "millimeters")
    {
        cout << "Volume of the Pyramid is: " << volume * 1000000000;
    }
}
