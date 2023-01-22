#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy();
void clear(int x, int y, char previous);
void showPacman(int x, int y);
void showGhost(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
    int g2x = 7;
    int g2y = 3;

    int gx = 3;
    int gy = 2;
    string direction = "right";
    char previousChar = ' ';
    string direction2 = "down";
    char previousChar2 = ' ';
    system("cls");
    printMaze();
    showGhost(gx, gy);
    showGhost(g2x, g2y);

    while (true)
    {
        Sleep(100);
        // move Ghost Functionality
        if (direction == "right")
        {
            char nextLocation = getCharAtxy(gx + 1, gy);
            if (nextLocation == '%')
            {
                direction = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar);
                gx = gx + 1;
                previousChar = nextLocation;
                showGhost(gx, gy);
            }
        }
        if (direction == "left")
        {
            char nextLocation = getCharAtxy(gx - 1, gy);
            if (nextLocation == '%')
            {
                direction = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar);
                gx = gx - 1;
                previousChar = nextLocation;
                showGhost(gx, gy);
            }
        }
    

        Sleep(100);
        if (direction2 == "down")
        {
            char nextLocation = getCharAtxy(g2x, g2y + 1);
            if (nextLocation == '%')
            {
                direction2 = "up";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(g2x, g2y, previousChar2);
                g2y = g2y + 1;
                previousChar2 = nextLocation;
                showGhost(g2x, g2y);
            }
        }
        if (direction2 == "up")
        {
            char nextLocation = getCharAtxy(g2x, g2y - 1);
            if (nextLocation == '%')
            {
                direction2 = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(g2x, g2y, previousChar2);
                g2y = g2y - 1;
                previousChar = nextLocation;
                showGhost(g2x, g2y);
            }
        }
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void clear(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void showGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void printMaze()
{
    cout << "%%%%%%%%%%" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%%%%%%%%%%" << endl;
}