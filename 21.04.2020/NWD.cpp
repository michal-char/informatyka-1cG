#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n;

    cin >> a >> b;
    while (b != 0)
    {
        n = b;
        b = a % b;
        a = n;
    }
    cout << a;
}
