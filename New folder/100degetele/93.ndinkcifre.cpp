/*
Se citeste un numar natural k din intervalul [1,9]. Afisati toate numerele n formate din exact k cifre care au proprietatea ca n-1 si n+1 sunt numere prime.
Exemplu:
k=2
se vor afisa numerele 12, 18, 30, 42, 60 si 72
Explicatie: 12 este afisat deoarece 11 si 13 sunt numere prime.
*/

#include <iostream>
using namespace std;

int main()
{
    int p, k, d, n, a, b, prim1, prim2;
	
    cout << "k=";
	cin >> k;
	
    p = 1;
    for (int i = 1; i <= k; i++)
	
        p = p * 10;
		
    for(n = p / 10; n <= p - 1; n = n + 2)
	
    {
	
        a = n - 1;
		
        prim1 = 1;
		
        for (d = 2; d * d <= a; d++)
		
            if(a % d == 0) prim1 = 0;
			
        b = n + 1;
		
        prim2 = 1;
		
        for (d = 2; d * d <= b; d++)
		
            if (b % d == 0) prim2 = 0;
			
        if (prim1 == 1 & prim2 == 1) cout << n << endl;
		
    }
    return 0;
}