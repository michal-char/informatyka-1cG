#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int sml, big, a, n; cin >> n;
	cin >> a;
	sml = a; 
	big = a;

	for (int i = 1; i < n; i++)
	{
		cin >> a;
		sml = min(a, sml);
		big = max(a, big);
	}
	cout << big - sml;
	return 0;
}
