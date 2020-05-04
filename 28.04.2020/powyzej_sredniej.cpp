#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, suma = 0; cin >> n;
    size_t size = n;
    std::vector<int> a(size);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma = suma + a[i];
    }
    double srednia = suma / n;
    bool t = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > srednia)
        {
            t = true;
            cout << a[i] << endl;

        }

    }
    if (!t)
        cout << "BRAK";
    return 0;
}