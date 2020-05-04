#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    short t[10];
    for (short a = 0; a < 10; a++)
        cin >> t[a];
    for (short i = 9; i >= 0; i--)
        cout << t[i] << endl;
}