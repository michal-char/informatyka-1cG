#include <bits/stdc++.h>

using namespace std;

void instrukcja()
{
	cout << "  _  __         _   _            _          _               " << endl;
	cout << " | |/ /  __ _  | | | |__  _  _  | |  __ _  | |_   ___    _ _ " << endl;
	cout << " | ' <  / _` | | | | / / | || | | | / _` | |  _| / _ \\  |' _|" << endl;
	cout << " |_|\\_\\ \\__,_| |_| |_\\_\\ \\__,_| |_| \\__,_| \\___| \\___/  |_|  " << endl;
	cout << "                                                                         " << endl;

	cout << "INSTRUKCJA:" << endl;
	cout << "" << endl;
	cout << "WPROWADZ 1 LICZBE, NESTEPNIE ZNAK OPERACJI KTORA CHCESZ WYKONAC (PODANE PONIZEJ)" << endl;
	cout << "I DRUGA LICZBE (W PRZYPADKU OPERACJI WYMAGAJACYCH 1 ZMIENNEJ PROGRAM NIE ZAPYTA CIE" << endl;
	cout << "O NIA I AUTOMATYCZNE WYKONA DZIALANIE PO WPROWADZENIU ZNAKU ODPOWIEDNIEJ OPERACJI." << endl;
	cout << "SA ONE OZNACZONE W SPISIE ~ NA POCZATKU.)" << endl;
	cout << ""
	cout << "JESLI SIE POMYLILES> LUB CHCESZ ZACZAC OD NOWA WPISZ X"
	cout << "" << endl;

	cout << "MOZLIWE OPERACJE:" << endl;
	cout << "DODAWANIE (+)" << endl;
	cout << "ODEJMOWANIE (-)" << endl;
	cout << "MNOZENIE (*)" << endl;
	cout << "DZIELENIE (/)" << endl;
	cout << "POTEGOWANIE (^)" << endl;
	cout << "PIERWIASTEK - 1 ZMIENNA TO L. PODPIERWIASTKOWA, A 2 TO STOPIEN PIERWIASTKA (#)" << endl;
	cout << "~SILNIA (!)" << endl;
	cout << "~LOGARYTM NATURALNY (n)" << endl;
	cout << "LOGARYTM O DOWOLNEJ PODSTAWIE (l)" << endl;
	cout << "MODULO (%)" << endl;
	cout << "~W. BEZWZGLEDNA (a)" << endl;
	cout << "" << endl;
}

float dodawanie(float a, float b)
{
	float c = a + b;
	return c;
}

float odejmowanie(float a, float b)
{
	float c = a - b;
	return c;
}

float mnozenie(float a, float b)
{
	float c = a * b;
	return c;
}

float dzielenie(float a, float b)
{
	float c = a / b;
	return c;
}

float potegowanie(float a, float b)
{
	float c = pow(a,b);
	return c;
}

float pierwiastkowanie(float a, int b)
{
	float c = pow(a, (1.0 / b));
	return c;
}

float silnia(float a)
{
	float c = 1;
	for (int i = 1; i <= a; ++i)
	{
		c = c * i;
	}
	return c;
}

float lognat(float a)
{
	float c = log(a);
	return c;
}

float log(float a, float b)
{
	float c = (log(b) / log(a));
	return c;
}

float mod(float a, float b)
{
	float c = fmod(a, b);
	return c;
}

float bezwzgl(float a)
{
	float c = abs(a);
	return c;
}

float liczenie(char operacja, float a, float b)
{
	float c;
	switch (operacja)
	{
	case '+':
		c = dodawanie(a, b);
		break;
	case '-':
		c = odejmowanie(a, b);
		break;
	case '*':
		c = mnozenie(a, b);
		break;
	case '/':
		c = dzielenie(a, b);
		break;
	case '^':
		c = potegowanie(a, b);
		break;
	case '#':
		c = pierwiastkowanie(a, b);
		break;
	case '!':
		c = silnia(a);
		break;
	case 'n':
		c = lognat(a);
		break;
	case 'l':
		c = log(a, b);
		break;
	case '%':
		c = mod(a, b);
		break;
	case 'a':
		c = bezwzgl(a);
		break;
	}
	return c;
 }

int main()
{
	char operacja;
	float a, b, c;

	instrukcja();

	cin >> a;

	do
	{
		cin >> operacja;

		if (operacja != '!' && operacja != 'n' && operacja != 'a' && operacja !='X')
		{
			cin >> b;
		}

		if (operacja == 'X' || a == 'X' || b == 'X')
		{
			cout << "cleared";
			cin >> a >> operacja >> b;
		}

		cout << liczenie(operacja, a, b);
		c = liczenie(operacja, a, b);
		a = c;

	} while (operacja != ';');
} 
