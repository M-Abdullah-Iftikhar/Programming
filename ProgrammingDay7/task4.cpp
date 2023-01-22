#include <iostream>
using namespace std;

void amplify(int x, int num);
main()
{
    int x = 1;
    int num;
    cout << "Enter Desired number: ";
    cin >> num;
    amplify(x,num);


}

void amplify(int x,int num){

    
        while (x <= num)
    {
        if (x % 4 != 0)
        {
            cout << x << endl;
        }
        else if (x % 4 == 0 )
        {
            cout << x * 10 << endl;
        }
        x++;
    }
    
    cout << endl;
}