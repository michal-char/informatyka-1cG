#include<iostream>

using namespace std;
int main()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int w = a1 * b2 - a2 * b1;
    int wx = c1 * b2 - c2 * b1;
    int wy = a1 * c2 - a2 * c1;
    if (w==0)
    {
        if (wx==0 && wy==0)
        {
            cout << "NIEOZNACZONY";
        }
        else
        {
            cout << "SPRZECZNY";
        }
    }
    else
    {
        cout << double(wx / w) << ' ' << double(wy / w);
    }
}
