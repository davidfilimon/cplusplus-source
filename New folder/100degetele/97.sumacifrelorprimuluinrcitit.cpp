/*
Se citeste un numar natural n si apoi n numere naturale. Afisati numerele care au suma cifrelor egala cu suma cifrelor primului numar citit.
Ex:
se citesc numerele
7
23 78 14 30 32 8 50
se vor afisa
14 32 50
*/

#include <iostream>
using namespace std;

int main()
{
    int i, n, x, y, z, scx, scy;
	
    cin >> n;
    cin >> x;
	
    scx = 0;
	
    while (x > 0){
	
	scx = scx + x % 10;
	x = x / 10;
	
	}
    for (i = 1; i < n; i++)
        {
            cin >> y;
            scy = 0;
			z = y;
			
            while (y > 0) {
			
			scy = scy + y % 10;
			y = y / 10;
			
			}
			
            if (scx == scy)
			
			cout << z << " ";
        }
    return 0;
}