#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (y1 > y2)
	{
		cout << x2 << ' ' << y1 << ' ' << x1 << ' ' << y2 << endl;
	}
	else
	{
		cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << ' ' << endl;
	}
	cout << (abs(y2 - y1) * abs(x2 - x1));
}
