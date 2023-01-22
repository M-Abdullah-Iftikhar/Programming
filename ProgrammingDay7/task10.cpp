#include <iostream>
using namespace std;

main()
{
    int num;

    cout<<"Enter number of Rows: ";
    cin>>num;

    for(int x = 1; x<=num; x++)
    {
        for(int y = 1; y <= x; y++)
        {
            cout<<"*";
        }
    }
}