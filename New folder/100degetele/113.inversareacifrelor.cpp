/*
Se citeste un numar natural n cu numar par de cifre. Calculati si afisati numarul obtinut din n inversand cifra unitatilor cu a zecilor, cea a sutelor cu cea a miilor, etc.
Exemplu:
n=123456 rezulta 214365.
*/

#include<iostream>
using namespace std;
int main()
{
	int n, r;
	cin >> n;
	r = 0;
	while (n > 0)
	{
		r = r * 100 + n % 100;
		n = n / 100;
	}
	while (r > 0)
	{
		n = n * 10 + r % 10;
		r = r / 10;
	}
	cout << n;
	return 0;
}