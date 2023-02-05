#include <iostream>
using namespace std;

main()
{
    string word[4];

    for (int x = 0; x < 4; x++)
    {
        cout << "Enter words: ";
        cin >> word[x];
    }

    if (word[0] == word[1] && word[1] == word[2] && word[2] == word[3])
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}