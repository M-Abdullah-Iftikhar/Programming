#include <iostream>
using namespace std;

main()
{
    char word[] = "programming";
    string word2;
    int check = 0;
    char character;

    int count = 0;
  

    cout << "Enter a Word: ";
    getline(cin, word2);

    for (int y = 0;word2[y] != '\0';y++)
    {
        count++;
       
    }

    cout << count << endl;

    for (int x = count; x>=0; x--)
    {
        cout<<word2[x];
    }
}