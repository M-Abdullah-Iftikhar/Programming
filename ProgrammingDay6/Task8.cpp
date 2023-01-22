#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

main()
{	
	system("cls");
    char character;
    int x, y;

    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

system("cls");

    gotoxy(x, y);
    cout << character;
	

    if (x > 2 && x < 4 && y < 10 && y > 2)
    {
        cout << "inside";
    }
    else if (x > 0 && x < 6 && y < 10 && y > 8)
    {
        cout << "inside";
    }
    else if (x == 2 || x == 4 && y > 2 && y < 8)
    {
        cout << "Border";
    }
    else if (y == 2 || y == 10 && x < 4 && x > 2)
    {
        cout << "Border";
    }
    else if (y == 8 || y == 10 && x < 2 && x > 0)
    {
        cout << "Border";
    }
    else if (y == 8 || y == 10 && x < 6 && x > 4)
    {
        cout << "Border";
    }
    else if (x == 0 || x == 6 && y < 10 && y > 8)
    {
        cout << "Border";
    }else{
	cout<<"Outside";
	}
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
