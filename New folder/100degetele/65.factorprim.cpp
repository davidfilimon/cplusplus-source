/*
Se citeste un numar natural n. Afisati factorul prim care apare la puterea cea mai mare in descompunerea in factori primi a lui n.
Daca mai multi factori apar ca acea putere maxima, atunci se va afisa cel mai mare dintre ei.
Exemplu: n=36 => 3 (din 2 la 2 si 3 la 2), iar n=40 =>2 (din 2 la 3 si 5 la 1)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, d=2, emax=1, dmax;
	
    cin >> n;
	
    while (n > 1)
	
        if (n % d == 0)
		
        {
		
            int e = 0;
			
            while (n % d == 0) {e++; n = n / d;}
			
            if (e >= emax) {emax = e; dmax = d;}
			
        }
		
        else d++;
		
    cout << dmax;
	
    return 0;
	
}