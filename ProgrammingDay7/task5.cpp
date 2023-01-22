#include <iostream>
using namespace std;

float triangle(int num);
main()
{
    float num, result;
    cout << "Enter a Number: ";
    cin >> num;

    result = triangle(num);
    cout << result;
}



float triangle(int num)
{
    float y = 0;

    for (int x = 1; x <= num ; x++)
    {   
        for(int z = 1; z <= x; z++)
        {
        y++;
        }
    }

    return y;
}

/*float triangle(int num)
{
    float y;

    y = (num) * (2 + (num - 1));
    y = y / 2;

    return y;
}*/