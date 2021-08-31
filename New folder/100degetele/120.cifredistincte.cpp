/*
Se citeste un numar natural n. Afisati cifrele distincte ale lui n (in orice ordine).
Exemplu: Cifrele distincte ale lui 234542 sunt 2, 3, 4 si 5.
*/

#include <iostream>
using namespace std;
int main()
{
	int n, r, c;
	
	cout << "n=";
	cin >> n;
	
	while(n > 0)
	
	{
	
		c = n % 10;
		
		cout << c;
		
		r = 0;
		
		while(n > 0)
		
		{
		
			if(n % 10 != c) r = r * 10 + n % 10;
			
			n = n / 10;
			
		}
		n = r;
	}
	return 0;
}

