#include <iostream>
using namespace std;

int evenOdd();

main()
{   
    int result;
    evenOdd();
    
}

int evenOdd()
{
    int num;
    cout << "Enter a number: ";  
    cin >> num;

    if(num%2==0){
        cout<<num<<" is an even number";
    } else{
        cout<<num<<" is not an even number";
    }
}