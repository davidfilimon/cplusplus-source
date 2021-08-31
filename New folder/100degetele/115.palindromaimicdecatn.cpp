/*
Se citeste un numar natural n. Afisati cel mai mic numar palindrom care este mai mare decat n.
Exemple: n=12345 se afiseaza 12421
n= 123 se afiseaza 131
*/

#include<iostream>
using namespace std;

int main()
{
	int n, x, r, y;
	
	cin >> n;
	
	x = n + 1;
	do
	{
		y = x;
		r = 0;
		while(y > 0)
		{
			r = r * 10 + y % 10;
			y = y / 10;
		}
		if (x != r) x++;
	}
	while (x != r);
	cout << x;
}