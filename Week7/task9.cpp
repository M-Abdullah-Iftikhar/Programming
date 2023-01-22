#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter Desired number of rows: ";
    cin >> num;

    for (int x = 1; x <= num; x++)
    {
        for (int y = num; y > x; y--)
        {
            cout << " ";
            
        }
        int y = num;
        if (y == num)
            {
                for (int a = 1; a <= x; a++)
                {
                    cout << "*";
                }
                cout<<endl;
                
            }
    }

        for (int x = 1; x <= num; x++)
    {
        for (int y = num; y >= x; y--)
        {
            cout << "*";
            
        }
        cout<<endl;
        int y = num;
        if (y == num)
            {
                for (int a = 1; a <= x; a++)
                {
                    cout << " ";
                }
                
            }
    }
    
    cout << endl;
}
