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

    cout<<"Enter a Character: ";
    cin>>character;

    for (int y = 0;word2[y] != '\0';y++)
    {
        count++;
       
    }

    cout << count << endl;


    if(count % 2==0)
    {
        cout<<"True";
    }
    else if(count % 2 )
    {
        cout<<"False";
    }
}