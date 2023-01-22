#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int, int);

main(){
	gotoxy(0,5);

cout<<"  # "<<endl;
cout<<" # #  "<<endl;
cout<<"##### "<<endl;
cout<<"#   # "<<endl;
cout<<"#   #"<<endl;


cout<<"# "<<endl;

	gotoxy(0,11);

cout<<"#  "<<endl;
cout<<"#"<<endl;
cout<<"# "<<endl;
cout<<"#####"<<endl;

	gotoxy(0,17);

cout<<"# "<<endl;
cout<<"#  "<<endl;
	cout<<"# "<<endl;
	
cout<<"# "<<endl;
	
cout<<"#"<<endl;


}




void gotoxy(int x, int y){

	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	
}
