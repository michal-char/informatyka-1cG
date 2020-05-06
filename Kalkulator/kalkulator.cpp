#include <bits/stdc++.h>

using namespace std;

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

int main()
{
	cout << "  _  __         _   _            _          _               " << endl;
	cout << " | |/ /  __ _  | | | |__  _  _  | |  __ _  | |_   ___    _ _ " << endl;
	cout << " | ' <  / _` | | | | / / | || | | | / _` | |  _| / _ \\  |' _|" << endl;
	cout << " |_|\\_\\ \\__,_| |_| |_\\_\\ \\__,_| |_| \\__,_| \\___| \\___/  |_|  " << endl;
	cout << "                                                                         " << endl;

	cout << "INSTRUKCJA:" << endl;
	cout << "                                                                         " << endl;
	cout << "WPROWADZ 1 LICZBE, NESTEPNIE ZNAK OPERACJI KTORA CHCESZ WYKONAC (PODANE PONIZEJ)" << endl;
	cout << "I DRUGA LICZBE (W PRZYPADKU OPERACJI WYMAGAJACYCH 1 ZMIENNEJ PROGRAM NIE ZAPYTA CIE" << endl;
	cout << "O NIA I AUTOMATYCZNE WYKONA DZIALANIE PO WPROWADZENIU ZNAKU ODPOWIEDNIEJ OPERACJI." << endl;
	cout << "SA ONE OZNACZONE W SPISIE ~ NA POCZATKU.)" << endl;
	cout << "                                                                         " << endl;

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
	

	char operacja;
	float a, b; 
	cin >> a;
	cin >> operacja;
	if (operacja != '!' && operacja != 'n' && operacja != 'a')
	{
		cin >> b;
	}

	switch (operacja)
	{
	case '+':
		cout << dodawanie(a, b);
		break;
	case '-':
		cout << odejmowanie(a, b);
		break;
	case '*':
		cout << mnozenie(a, b);
		break;
	case '/':
		cout << dzielenie(a, b);
		break;
	case '^':
		cout << potegowanie(a, b);
		break;
	case '#':
		cout << pierwiastkowanie(a, b);
		break;
	case '!':
		cout << silnia(a);
		break;
	case 'n':
		cout << lognat(a);
		break;
	case 'l':
		cout << log(a, b);
		break;
	case '%':
		cout << mod(a, b);
		break;
	case 'a':
		cout << bezwzgl(a);
		break;
	}
}
