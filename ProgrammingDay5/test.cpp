#include <iostream>
#include <windows.h>
using namespace std;

int y=10;

int main()
{
    int x=y;
    y=100;
    x=20;

	cout<<x<<" "<<y;
}