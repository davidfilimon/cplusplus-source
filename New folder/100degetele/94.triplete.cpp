/*
Se citesc de la tastatura numere naturale pana cand se introduce valoarea 0. Sa se afiseze tripetele de numere introduse consecutiv care au proprietatea ca primul numar din triplet impartit la suma cifrelor sale da catul egal cu al doiea numar din triplet si restul egal cu cel de-al treilea numar din triplet.
Exemplu:
daca se introduc numerele 2 29 2 7 11 5 1 5 0
tripletele cautate sunt 29 2 7 si 11 5 1
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, z, n, s;
    cin >> x >> y;
    while (y != 0)
    {
        cin >> z;
		
        n = x;
        s = 0;
		
        while (n > 0)
        {
            s = s + n % 10;
			
            n = n / 10;
        }
		
        if(x / s == y && x % s == z)
		
		cout << x << " " << y << " " << z << endl;
		
        x = y;
		
        y = z;
    }
	
    return 0;
}