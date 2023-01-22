#include <iostream>
using namespace std;

float aggrigade();

main()
{
    float result;

    result =  aggrigade();
    if (result < 40)
    {
        cout << "F";
    }
    else if (result >= 40 && result < 50)
    {
        cout << "D";
    }else if (result >= 50 && result < 60)
    {
        cout << "C";
    }else if (result >= 60 && result < 70)
    {
        cout << "B";
    }else if (result >= 70 && result < 80)
    {
        cout << "B+";
    }else if (result >= 80 && result < 90)
    {
        cout << "A";
    }else if (result >= 90 && result <= 100)
    {
        cout << "A+";
    }
}

float aggrigade()
{
    float eng, math, chem, sst, bio, agg;

    cout << "Enter English marks: ";
    cin >> eng;
    cout << "Enter Maths marks: ";
    cin >> math;
    cout << "Enter Chemistry marks: ";
    cin >> chem;
    cout << "Enter Social study marks: ";
    cin >> sst;
    cout << "Enter Biology marks: ";
    cin >> bio;

    agg = (eng + math + chem + sst + bio) / 500;
    agg = agg * 100;
    return agg;
}