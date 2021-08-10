/*
Se citesc numere naturale pana cand se introduce valoarea 0. Calculati si afisati media aritmetica a numerelor cu exact 2 cifre dintre cele citite.
Exemplu:
Se citesc numerele 3 4 12 2 13 444 0
Media va fi 12.5
*/

#include <iostream>
using namespace std;

int main()
{
    int x, s=0, n=0;
    do
    {
        cin >> x;
		
        if(x < 100 && x > 9)
        {
            s= s + x;
			
            n++;
        }
    }
    while (x !=0);
	
    cout << (float) s / n;
	
    return 0;
}