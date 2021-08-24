/*
Se citesc doua numere naturale n si k. Afisati numerele naturale din intervalul [1,n] care au cel putin k divizori.
Exemplu: n=10, k=4 se vor afisa numerele 6 8 10
*/

#include <iostream>
using namespace std;

int main()
{
    int n, d, k, a;
    cin >> n >> k;
	
    for (int i = 1; i <= n; i++)
    {
        a = 0;
		
        for (d=1; d <= i; d++)
		
        if (i % d == 0) a++;
		
        if (a >= k) cout << i << " ";
		
    }

    return 0;
}