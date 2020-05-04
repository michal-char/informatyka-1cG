#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for (int i = 2; n >= i * i; i++)
    {
        while (!(n % i))
        {
            cout << i << endl;
            n = n / i;
        }
    }
    cout << n << endl;
}