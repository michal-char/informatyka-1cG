#include <bits/stdc++.h>

using namespace std;

int NWD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
		return NWD(b, a % b);
}

int main()
{
	int num1, den1, num2, den2, numnew, nwd, dennew;
	cin >> num1 >> den1 >> num2 >> den2;
	dennew = den1 * den2 / NWD(den1, den2);
	num1 = num1 * (dennew / den1);
	num2 = num2 * (dennew / den2);
	numnew = num1 + num2;
	nwd = NWD(numnew, dennew);
	numnew = numnew / nwd;
	dennew = dennew / nwd;
	if (numnew / dennew)
	{
		cout << numnew / dennew << " ";
	}
	if (numnew % dennew)
	{
		cout << numnew % dennew << "/" << dennew;
	}

}
