#include <iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2);
void exit();
main(){

	
	string name1,name2;
	float metric1,metric2;
	float inter1,inter2;
	float ecat1,ecat2;
	float result1,result2;
	
	char any;
	
	while(true){
	system("cls");
	printMenu();
	int num;
	


 	cout<<"Press 1 to Enter Details of first student:"<<endl;
        cout<<"Press 2 to Enter Details of second student:"<<endl;
        cout<<"Press 3 to calculate the aggregate of first student:"<<endl;
        cout<<"Press 4 to calculate the aggregate of second student:"<<endl;
        cout<<"Press 5 to display the student with roll number 01:"<<endl;
        cout<<"Press 6 to Exit The Window:"<<endl;
	cout<<"Enter Choice: ";
	cin>>num;

	if (num==1){

	system("cls");
	cout<<"Enter Your Name: ";
	cin>>name1;

	cout<<"Enter Your Metric Marks: ";
	cin>>metric1;

	cout<<"Enter Your Inter Marks: ";
	cin>>inter1;

	cout<<"Enter Your Ecat Marks: ";
	cin>>ecat1;
	cout<<"Press any Key to continue: ";
	cin>>any;
	

	}
	if (num==2){

	system("cls");
	cout<<"Enter Your Name: ";
	cin>>name2;

	cout<<"Enter Your Metric Marks: ";
	cin>>metric2;

	cout<<"Enter Your Inter Marks: ";
	cin>>inter2;

	cout<<"Enter Your Ecat Marks: ";
	cin>>ecat2;
	cout<<"Press any Key to continue: ";
	cin>>any;

	}
	if (num==3){

	system("cls");
	calculateAggregate(name1,metric1,inter1,ecat1);
	cout<<"Press any Key to continue: ";
	cin>>any;

	}
	if (num==4){

	system("cls");
	calculateAggregate(name2,metric2,inter2,ecat2);
	cout<<"Press any Key to continue: ";
	cin>>any;
	}
	if(num==5){

	system("cls");
	compareMarks(name1,ecat1,name2,ecat2);
	cout<<"Press any Key to continue: ";
	cin>>any;
	}
	if(num==6){
	while(true){
	system("cls");
	cout<<"The Window is Closed:";

	cin>>any;
	}
	}


	}

	

	}
	
	

void printMenu(){

	cout<<"********************"<<endl;
	cout<<"*    UET LAHORE    *"<<endl;
	cout<<"********************"<<endl;

	}



void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks){

	float agg=((matricMarks/1100)*25)+((interMarks/550)*45)+((ecatMarks/400)*30);
	
	cout<<"Aggregade is: "<<agg;	
	cout<<endl;
		
	}
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2){
	if(ecatMarksStd1>ecatMarksStd2){
	cout<<nameStd1<<" has Roll No 1";
	}
	if(ecatMarksStd2>ecatMarksStd1){
	cout<<nameStd2<<" has Roll No 1";
	}
	cout<<endl;
	}


	