#include <bits/stdc++.h>

using namespace std;
int i;

int main()
{
        //los
        srand(time(0));
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int a = rand() % 1001;

        //napisy

        cout << "                            _            __               _        _       " << endl;
        cout << "                           | |/         / /              | |      |_|        " << endl;
        cout << " ______ _   _ __ ___   __ _| / ___     / / ______ _    __| |_   _ _______  " << endl;
        cout << "|_  / _` | | '_ ` _ \\ / _` |/|/ _ \\   / / /_  / _` |  / _` | | | |_  / _ \\ " << endl;
        cout << " / / (_| | | | | | | | (_| / | (_) | / /   / / (_| | | (_| | |_| |/ / (_) |" << endl;
        cout << "/___\\__,_| |_| |_| |_|\\__,/|_|\\___/ /_/   /___\\__,_|  \\__,_|\\__,_/___\\___/ " << endl;
        cout << "                                                                       " << endl;
        cout << "                                                                       " << endl;
        cout << "PODAJ LICZBE Z ZAKRESU <0,1000>" << endl;

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

