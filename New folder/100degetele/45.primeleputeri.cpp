/*
Se citesc 3 numere naturale n, a si b. Afisati primele n puteri ale lui 2 din intervalul [a,b]. Daca nu exista cel putin n puteri ale lui 2 in interval, atunci se vor afisa cele care exista.
Exemple: pentru n=2 a=6 b=35 se vor afisa valorile 8 si 16
pentru n=2 a=24 b=55 se va afisa valoarea 32.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, n, p, k;
	
	cin >> n >> a >> b;
	
	k = 0;
	
	p = 1;
	
	while (p <= b && k < n)
	{
		if (p >= a) { cout << p << " ";
		
				   k++;
		}
		p = p * 2;
		
	}
	return 0;
}