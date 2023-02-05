#include <iostream>
using namespace std;

main()
{
    char word[] = "programming";
    int check = 0;
    char character;

    cout<<"Enter a Word: ";
    cin>>word;

    cout << "Enter a Character: ";
    cin >> character;

    for (int x = 0; word[x] != '\0'; x++)
    {
        if (word[x] == character)
        {
            check = 1;
        }
    }

    if (check == 0)
    {
        cout << "No! '" << character << "' is not present" << endl;
    }
    else if (check == 1)
    {
        cout << "Yes! '" << character << "' is present" << endl;
    }
}