#include <iostream>
using namespace std;




main(){
	int num,p1,p2;
	
	string ten,unit;
	
	cout<<"Enter a 2 digit number: ";
	cin>>num;

	p2=num%10;
	p1=(num/10)%10;

	if(p1==0){
	ten="";
	}
	if(p1==2){
	ten="Twenty";
	}
	if(p1==3){
	ten="Thirty";
	}
	if(p1==4){
	ten="Fourty";
	}
	if(p1==5){
	ten="Fifty";
	}
	if(p1==6){
	ten="Sixty";
	}
	if(p1==7){
	ten="Seventy";
	}
	if(p1==8){
	ten="Eighty";
	}
	if(p1==9){
	ten="Ninety";
	}
	
	if(p2==0){
	unit="";
	}
	if(p2==1){
	unit="One";
	}
	if(p2==2){
	unit="Two";
	}
	if(p2==3){
	unit="Three";
	}
	if(p2==4){
	unit="Four";
	}
	if(p2==5){
	unit="Five";
	}
	if(p2==6){
	unit="Six";
	}
	if(p2==7){
	unit="Seven";
	}
	if(p2==8){
	unit="Eight";
	}
	if(p2==9){
	unit="Nine";
	}

	cout<<ten<<" "<<unit;

}