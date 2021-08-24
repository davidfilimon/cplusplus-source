/*
Se citesc doua numere naturale a si b. Calculati si afisati cate numere din intervalul [a,b] au proprietatea ca sunt incadrate de doua numere prime. Un astfel de numar este 12 (11 si 13 sunt prime).
Exemplu:
In intervalul [10,30] sunt 3 astfel de numere (12, 18 si 30)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, nr = 0, x, y, px, py, d;
    cin >> a >> b;
    for(n = a; n <= b; n++)
    {
        x = n-1;
		
        y = n+1;
		
        px = 1;
		
        for (d = 2; d * d <= x; d++)
		
			if (x % d == 0) px = 0;
		
							py = 1;
		
        for(d = 2; d * d <= y; d++)
	
			if (y % d == 0) py = 0;
			
				if (px == 1 && py == 1) nr++;

    }
    cout << nr;
    return 0;
}