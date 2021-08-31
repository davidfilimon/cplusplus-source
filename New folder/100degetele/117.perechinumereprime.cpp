/*
Se citeste un numar natural n. Afisati primele n perechi de numere prime care sunt consecutive in multimea numerelor impare.
Exemplu: pentru n=3 se afiseaza
3 5
5 7
11 13
*/


#include<iostream>
using namespace std;

int main()
{
	int n, k, p, d, x, y;
	cin >> n;
	x = 3;
	k = 0;
	while (k < n)
	{
		p = 1;
		for(d = 2;d <=x / 2; d++)
			if(x % d == 0) p = 0;
		if(p == 1)
		{
			y = x + 2;
			for (d = 2; d <= y / 2; d++)
				if (y % d == 0) p = 0;
		}
		if (p == 1)
		{
			cout << x << " " << y << endl;
			k++;
		}
		x = x + 2;
	}
	return 0;
}
