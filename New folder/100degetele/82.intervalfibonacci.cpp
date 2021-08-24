/*
Se citesc doua numere naturale a si b (ambele mai mari decat 1). Calculati si afisati cati termeni din sirul lui Fibonacci se afla in intervalul [a,b].
Exemplu:
In intervalul [20,40] sunt 2 termeni (21 si 34)
*/


#include <iostream>
using namespace std;

int main()
{
    int a, b, k = 0, x, y, z;
    cin >> a >> b;
	
    x = y = 1;
	
    while (x + y <= b)
	
    {
        z = x + y;
		
        if (z >= a) k++;
		
        x = y;
		
        y = z;
    }
	
    cout << k;
	
    return 0;
}