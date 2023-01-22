#include <iostream>
using namespace std;

char checkResult(int marks);

main(){
    int marks;
    char result;

    cout<<"Enter marks: ";
    cin>>marks;
    result = checkResult(marks);
    cout<<"Grade is: "<<result;

}

char checkResult(int marks){
    char grade;
    if(marks<50){
        grade = 'F';
    }
        if(marks>=50&& marks<60){
        grade = 'E';
    }
        else if(marks>=60&& marks<70){
        grade = 'D';
    }
       else if(marks>=70&& marks<80){
        grade = 'C';
    }
        else if(marks>=80&& marks<85){
        grade = 'B';
    }
        else if(marks>=85){
        grade = 'A';
    }else{
	grade= '0';
}
    return grade;
}