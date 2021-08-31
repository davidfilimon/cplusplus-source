/*
Se citeste un numar natural n. Introduceti semnul * in numar astfel incat produsul obtinut sa fie maxim.
Exemplu: n=4322, produsul maxim se obtine astfel: 4*322=1288. (celelalte variante: 43*22=946 sau 432*2=864 dau produs mai mic)
*/

#include<iostream>
using namespace std;

int main()
{
	int n, p, pp, pmax = 0;
	
	cout << "n=";
	cin >> n;
	
	p = 10;
	
	while(p <= n)
	
	{
	
		if(n / p * (n % p) > pmax){ pmax = n / p * (n % p);
		
		                    pp = p;
							
		}	
		
		p = p * 10;
		
	}
	cout << n / pp << "*" << n % pp << "=" << pmax;
	
	return 0;
}