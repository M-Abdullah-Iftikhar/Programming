#include <iostream>
using namespace std;

main()
{

    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    int check = 0;
    char character;
    string word;

    cout << "Enter a Word: ";
    cin >> word;

    for (int x = 0; word[x] != '\0'; x++)
    {
        for (int y = 0; abc[y] != '\0'; y++)
        {
            if (abc[y] == word[x])
            {
                if (word[x] == 'z')
                {
                    cout << abc[0];
                }
                else
                {
                    cout << abc[y + 1];
                }
            }
        }
    }
}