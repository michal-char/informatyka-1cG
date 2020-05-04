#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    cin >> a >> b >> c;
    vector<double> boki;
    boki.push_back(a);
    boki.push_back(b);
    boki.push_back(c);
    sort(boki.begin(), boki.end());
    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "BLEDNE DANE";
    }
    else if (boki[0] + boki[1] <= boki[2])
    {
        cout << "TROJKAT NIE ISTNIEJE";
    }
    else
    {
        double a = boki[0], b = boki[1], c = boki[2];
        double p = (double)(a + b + c) / 2;
        printf("%.2f", sqrt(p * (p - a) * (p - b) * (p - c)));
    }
    return 0;
}
