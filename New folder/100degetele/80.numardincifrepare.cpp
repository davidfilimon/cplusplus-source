/*
Se citesc numere naturale pana cand se introduce valoarea 0. Pentru fiecare numar citit calculati numarul format din cifrele lui pare, numarul format din cifrele lui impare si afisati cel mai mare dintre cele doua numere calculate.
Exemplu:
Daca introducem numerele 234564 335 224 10136 0
vom obtine numerele 2464 335 224 113
*/

#include <iostream>
using namespace std;

int main()
{
    int n, np, ni, pp, pi;
    cin >> n;
	
    while (n > 0)
	
    {
        ni = np = 0;
        pp = pi = 1;
		
        while (n)
        {
            if(n % 2 == 0) {np = np + n % 10 * pp;
			
                        pp = pp * 10;
						
                        }
						
            else {ni = ni + n % 10 * pi;
			
                   pi = pi * 10;
				   
                  }
				  
            n = n / 10;
			
        }
		
        if (np > ni) cout << np << " ";
		
        else cout << ni << " ";
		
        cin >> n;
    }
    return 0;
}