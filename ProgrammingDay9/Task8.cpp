#include <iostream>
using namespace std;

main()
{
    
    int num;
    int count = 0;

    int seconds;

    cout<<"Enter number of squares: ";
    cin>>num;
    string word[num];

    seconds = num*2;



    for (int x = 0; x < num; x++)
    {
        cout << "Enter Color"<<x+1<<": ";
        cin >> word[x];
    }
        for (int x = 1; x < num; x++)
    {   
        if(word[x-1]!=word[x])
        {
            seconds++;
        }
    }
    cout<<seconds;
}