#include <iostream>
using namespace std;

//printing number of vowels in a string

main()
{

    string word2;
  

    cout << "Enter a Word: ";
    getline(cin, word2);

    for (int y = 0; word2[y] != '\0'; y++)
    {
        if (word2[y] == 'a' || word2[y] == 'e' || word2[y] == 'i' || word2[y] == 'o' || word2[y] == 'u')
        {
            continue;
        }
        cout<<word2[y];
    }


}