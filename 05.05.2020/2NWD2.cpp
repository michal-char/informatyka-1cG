#include <bits/stdc++.h>

using namespace std;

int NWD(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	else
	{
		return NWD(b, a % b);
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << NWD(a, b);
}