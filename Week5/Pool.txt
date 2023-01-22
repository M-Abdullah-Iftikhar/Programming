#include <iostream>
using namespace std;

float volumeF();
float pipe1F();
float pipe2F();

main()
{

    float volume, pipe1, pipe2;
    float hours, litres, over;

    volume = volumeF();

    pipe1 = pipe1F();

    pipe2 = pipe2F();

    cout << "Enter Number of absent hours: ";
    cin >> hours;

    pipe1 = pipe1 * hours;
    pipe2 = pipe2 * hours;

    litres = (pipe1) + (pipe2);

    if (litres < volume)
    {

        litres = (litres / volume) * 100;

        cout << "The Pool is " << litres << " % full" << endl;

        pipe1 = (pipe1 / volume) * 100;
        pipe2 = (pipe2 / volume) * 100;

        cout << "Pipe 1 :" << pipe1 << endl;
        cout << "Pipe 2 :" << pipe2 << endl;
    }

    if (litres > volume)
    {

        litres = litres - volume;
        over = ((pipe1 + pipe2) - volume) / ((pipe1 + pipe2) / hours);

        cout << "For " << over << " Hours, The pool overflows with " << litres << " Litres";
    }
}
float volumeF()
{
    system("cls");
    float volume;
    cout << "Enter Volume of the pool(1-10000): ";
    cin >> volume;

    if (volume > 10000 || volume < 0)
    {
        volumeF();
    }

    if (volume < 10000 && volume > 0)
    {
        return volume;
    }
}

float pipe1F()
{

    float pipe1;
    cout << "Enter Rate flow of Pipe 1: ";
    cin >> pipe1;

    if (pipe1 > 5000 || pipe1 < 0)
    {
        pipe1F();
    }

    if (pipe1 < 5000 && pipe1 > 0)
    {
        return pipe1;
    }
}

float pipe2F()
    {

        float pipe2;
        cout << "Enter Rate flow of Pipe 2: ";
        cin >> pipe2;

        if (pipe2 > 5000 || pipe2 < 0)
        {
            pipe2F();
        }

        if (pipe2 < 5000 && pipe2 > 0)
        {
            return pipe2;
        }
    }
