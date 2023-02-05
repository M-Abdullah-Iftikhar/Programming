#include <iostream>
using namespace std;

int number(char check);

main()
{
    string danceCode[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                            "Pop", "Lock", "Arabesque"};

    int num;
    char num4d[] = "word";
    bool valid;
    

    cout << "Enter a 4 digit number: ";
    cin >> num4d;
   

    for (int x = 0; x < 4; x++)
    {
        if (num4d[x] == '0' || num4d[x] == '1' || num4d[x] == '2' || num4d[x] == '3' || num4d[x] == '4' || num4d[x] == '5' || num4d[x] == '6' || num4d[x] == '7' || num4d[x] == '8' || num4d[x] == '9')
        {
            valid = true;
        }
        else
        {
            valid = false;
            break;
        }
    }
    if (valid == true)
    {
        for (int x = 0; x < 4; x++)
        {
            int sum = x + number(num4d[x]);
           
            
            if(sum < 10)
            {
            cout << danceCode[sum]<<" ";
            }
            else if(sum>=10)
            {
                sum = sum - 10;
                cout<< danceCode[sum]<<" ";
            }
        }
    }
    else if (valid == false)
    {
        cout << "invalid";
    }
}

int number(char check)
{
    if (check == '1')
    {
        return 1;
    }
    if (check == '2')
    {
        return 2;
    }
    if (check == '3')
    {
        return 3;
    }
    if (check == '4')
    {
        return 4;
    }
    if (check == '5')
    {
        return 5;
    }
    if (check == '6')
    {
        return 6;
    }
    if (check == '7')
    {
        return 7;
    }
    if (check == '8')
    {
        return 8;
    }
    if (check == '9')
    {
        return 9;
    }
    if (check == '0')
    {
        return 0;
    }
}