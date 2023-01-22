#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

main()
{

    int x, y, h;

    cout << "Enter a Multiple: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    system("cls");
    gotoxy((x), (y));


    if (x > (h * 1) && x < (h * 2) && y < (h * 4) && y >= (h * 1))
    {
        cout << "Inside";
    }
    else if (x > (h * 0) && x < (h * 3) && y < (h * 1) && y > (h * 0))
    {
        cout << "Inside";
    }
    else if (x == (h * 1) && y >= (h * 1) && y <= (h * 4))
    {
        cout << "Border";
    }
    else if ( x == (h * 2) && y >= (h * 1) && y <= (h * 4))
    {
        cout << "Border";
    }
    else if (y == (h * 0)  && x <= (h * 2) && x >= (h * 1))
    {
        cout << "Border";
    }
    else if ( y == (h * 4) && x <= (h * 2) && x >= (h * 1))
    {
        cout << "Border";
    }

    else if (y == (h * 1)  && x <= (h * 1) && x >= (h * 0))
    {
        cout << "Border";
    }
    else if ( y == (h * 0) && x <= (h * 1) && x >= (h * 0))
    {
        cout << "Border";
    }
    else if (y == (h * 1)  && x <= (h * 3) && x >= (h * 2))
    {
        cout << "Border";
    }
    else if ( y == (h * 0) && x <= (h * 3) && x >= (h * 2))
    {
        cout << "Border";
    }

    else if (x == (h * 0)  && y <= (h * 1) && y >= (h * 0))
    {
        cout << "Border";
    }
    else if ( x == (h * 3) && y <= (h * 1) && y >= (h * 0))
    {
	cout << "Border";
    }
    else
    {

        cout << "Outside";
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
