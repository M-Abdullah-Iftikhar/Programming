#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int, int);

main(){
	gotoxy(20,28);
	cout<<"A";

	gotoxy(20,29);
	cout<<"W";

	gotoxy(20,30);
	cout<<"I";

	gotoxy(20,31);
	cout<<"A";

	gotoxy(20,32);
	cout<<"S";





}




void gotoxy(int x, int y){

	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	
}
