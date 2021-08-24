/*
Se citesc doua numere naturale a si b. Afisati numarul care are suma maxima a exponentilor din descompunerea in factori primi. Daca ambele numere au aceeasi suma a exponentilor, atunci se va afisa oricare dintre ele.
Exemplu: pentru a=36, b=30 se va afisa 36 (36=2 la 2 * 3 la 2 , deci suma e 4, iar 30=2*3*5, deci suma e 3)
*/


#include <iostream>

using namespace std;

int main()
{
    int a, b, x, sea=0, seb=0;
    cin >> a >> b;
	
    x = a;
    int d = 2;
	
    while(x > 1)
        if(x % d == 0)
        {
            sea++; 
			
            x=x/d;
        }
		
        else d++;
		
    x = b;
    d = 2;
	
    while (x > 1)
        if(x % d == 0)
        {
            seb++;
            x=x / d;
			
        }
		
        else d++;
		
    if (sea > seb) cout << a;
	
    else cout << b;
	
    return 0;
}