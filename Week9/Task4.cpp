#include <iostream>
using namespace std;

main()
{
    char word[] = "programming";
    string word2;
    int check = 0;
    char character;

    cout<<"Enter a Word: ";
    getline(cin,word2);
    

   

    for (int x = 0; word2[x] != '\0'; x++)
    {
        cout<<word2[x]<<" is stored at Index "<<x<<endl;
    }


}