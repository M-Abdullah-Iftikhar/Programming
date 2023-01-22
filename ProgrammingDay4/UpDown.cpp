#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void playerMove(int x,int y);


main(){

	system ("cls");
	printMaze();
	int x=3;
	int y=3;
	while(true)
	{
	playerMove(x,y);
	if(x==3){
	if (y<9){

	y=y+1;
	}
	}
    if (y==8){
    gotoxy(x,y-1);
	cout<<" ";

	x=4;

	}
    if(x==4){

    if(y<10&&y>2){
    y=y-1;
    if(y<3){
        gotoxy(4,3);
        cout<<" ";
        x=3;


    }

    }

    }


	}
	}




void printMaze(){

cout<<"######################"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"#                    #"<<endl;
cout<<"######################"<<endl;

}


void playerMove(int x,int y)
	{


	gotoxy(x, y);
	cout<<"P";

	gotoxy(x,y-1);
	cout<<" ";



    gotoxy(x,y+1);
    cout<<" ";



	Sleep(200);



	}






void gotoxy(int x, int y)
 {

	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

 }
