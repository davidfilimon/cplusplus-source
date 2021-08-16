/*
Se citesc doua numere naturale a si b (a mai mic decat b). Afisati numerele din intervalul [a,b] care au proprietatea ca au numar maxim de divizori.
Exemplu: a=10, b=20 => 12, 18, 20 (au cate 6 divizori, iar restul numerelor au mai putini)
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, max=0;
	
    cin >> a >> b;
	
    for (int n = a; n <= b; n++)
	
    {
	
        int c = 0;
		
        for (int d = 1; d <= n; d++)
		
            if (n % d == 0) c++;
			
        if (c > max) max = c;
		
    }
    for (int n = a; n <= b; n++)
	
    {
	
        int c = 0;
		
        for (int d = 1; d <= n; d++)
		
            if (n % d == 0) c++;
			
        if (c == max) cout << n << " ";
		
    }
	
    return 0;
}