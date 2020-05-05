#include <bits/stdc++.h>

using namespace std;

int NWD(int a, int b)
{
    int n;
    while (b != 0)
    {
        n = b;
        b = a % b;
        a = n;
    }
    return a;
}

int main()
{
   
    int a, b, nwd;
    cin >> a >> b;
    nwd = NWD(a, b);
    cout << nwd;
}
