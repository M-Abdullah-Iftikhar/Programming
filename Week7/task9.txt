#include <iostream>
using namespace std;

float calculateMoney(int age, int priceM, int priceT);

main()
{
    int age;
    float priceM, priceT,money;

    cout << "Enter Lilly's Age: ";
    cin >> age;
    cout << "Enter Machine Price: ";
    cin >> priceM;
    cout << "Enter Each toy price: ";
    cin >> priceT;

    money = calculateMoney(age, priceM, priceT);

	

    if(money>priceM){
        money = money - priceM;
        cout<<"Yes! "<<money<<" USD are Remaining";
    }
    else if(money<priceM){
        money = priceM - money ;
        cout<<"No! "<<money<<" more USD are Required";
    }
}

float calculateMoney(int age, int priceM, int priceT)
{

	
    int x = 1;
    float even=0, odd=0;
    float money,sum;

    while (age>0)
    {
        if (age % 2 == 0)
        {
            even++;
        }
        else if (age % 2 != 0)
        {
            odd++;
        }
        age--;
    }
	
	sum = (even/2)*(20 + (even-1)*10);	
	

    money = sum + (odd*priceT);
	money = money-even;

        return money;
}