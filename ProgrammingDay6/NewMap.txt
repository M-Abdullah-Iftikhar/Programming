#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy();
void erase(int x, int y);
void printPacman(int x, int y);
char getCharAtxy(short int x, short int y);
int score = -2;
int scoreUp();

main()
{
    int pacmanX = 4; // X Coordinate of Pacman
    int pacmanY = 4; // Y Coordinate of Pacman
    bool gameRunning = true;

    score = scoreUp();
    system("cls");
    cout << endl;
    printMaze();
    printPacman(pacmanX, pacmanY);

    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
                scoreUp();
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
                scoreUp();
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
                scoreUp();
            }
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
                scoreUp();
            }
        }

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(200);
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

void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

int scoreUp()
{

    score = score + 1;
    gotoxy(0, 0);
    cout << "\t\t\t Score: " << score << endl;
    return score;
}

void printMaze()
{

    cout << " #######################################################################      " << endl;
    cout << " ||.. ......................................................  ......  ||          " << endl;
    cout << " ||.. %%%%%%%%%%%%%%%%        ...      %%%%%%%%%%%%%%  |%|..   %%%%   ||     " << endl;
    cout << " ||..        |%|   |%|     |%|...      |%|        |%|  |%|..    |%|   ||         " << endl;
    cout << " ||..        |%|   |%|     |%|...      |%|        |%|  |%|..    |%|   ||          " << endl;
    cout << " ||..        %%%%%%%%  . . |%|...      %%%%%%%%%%%%%%     ..   %%%%.  ||     " << endl;
    cout << " ||..        |%|       . . |%|...     ............... |%| ..       .  ||        " << endl;
    cout << " ||..        %%%%%%%%%%. . |%|...     %%%%%%%%%%%%    |%| ..   %%%%.  ||        " << endl;
    cout << " ||..               |%|.              |%|......       |%| ..    |%|.  ||       " << endl;
    cout << " ||..     ......... |%|.              |%|......|%|        ..    |%|.  ||      " << endl;
    cout << " ||..|%|  |%|%%%|%|.|%|.  |%|            ......|%|        ..|%| |%|.  ||        " << endl;
    cout << " ||..|%|  |%|   |%|..     %%%%%%%%%%%%%  ......|%|         .|%|.      ||       " << endl;
    cout << " ||..|%|  |%|   |%|..            ...|%|     %%%%%%        . |%|.      ||       " << endl;
    cout << " ||..|%|           .             ...|%|               |%| ..|%|.      ||      " << endl;
    cout << " ||..|%|  %%%%%%%%%%%%%%         ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||   " << endl;
    cout << " ||................................................   |%| ..........  ||    " << endl;
    cout << " ||   .............................................          .......  ||    " << endl;
    cout << " ||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|     |%| ..|%|.      ||    " << endl;
    cout << " ||..|%|  |%|   |%|..           ...|%|     %%%%%%     |%| ..|%|.      ||    " << endl;
    cout << " ||..|%|            .           ...|%|                |%| ..|%|.      ||     " << endl;
    cout << " ||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%      |%| ..|%|%%%%%  ||  " << endl;
    cout << " ||...............................................    |%| ..........  ||    " << endl;
    cout << " ||...............................................           .......  ||   " << endl;
    cout << " #######################################################################      " << endl;
}