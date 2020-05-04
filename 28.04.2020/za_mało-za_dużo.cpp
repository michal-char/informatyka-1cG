#include <bits/stdc++.h>

using namespace std;
int i;

int main()
{
        //los
        srand(time(0));
        int a = rand() % 1001;

        cout << "PODAJ LICZBE W ZAKRESIE <0,1000>" << endl;

        //gra
        int n;
        int i = 0;
        do
        {
            cin >> n;
            if (n > a)
            {
                cout << "ZA DUZO" << endl;
                i++;
            }
            else if (n < a)
            {
                cout << "ZA MALO" << endl;
                i++;
            }
            else
            {
                i++;
            }
        } while (n != a);

        cout << "BRAWO, ZGADLES ZA " << i << " RAZEM" << endl; 
}

