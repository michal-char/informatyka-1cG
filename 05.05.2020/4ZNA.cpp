#include <bits/stdc++.h>

using namespace std;

void znaki(char znak, int powt)
{
	for (int i = 0; i < powt; i++)
	{
		cout << znak;
	}
	cout << '\n';

}


int main()
{
	char znak;
	int powt;
	cin >> znak >> powt;
	for (int i = 1; i <= powt; i++)
	{
		znaki(znak, i);
	}
}