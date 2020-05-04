#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int a;
	cin >> a;
	switch (a)
		{
		case 1: cout << "PONIEDZIALEK"; break;
		case 2: cout << "WTOREK"; break;
		case 3: cout << "SRODA"; break;
		case 4: cout << "CZWARTEK"; break;
		case 5: cout << "PIATEK"; break;
		case 6: cout << "SOBOTA"; break;
		case 7: cout << "NIEDZIELA"; break;
		default: cout << "ERROR";
		}
}
