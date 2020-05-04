#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    signed int n;
    signed int sum = 0;
    do
    {
        cin >> n;
        sum = sum + n;
    } while (n != 0);
        cout << sum;
}