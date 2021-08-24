/*
Se da un interval [a,b]. Afisati cate dintre numerele din intervalul [a,b] au proprietatea ca atat ele cat si rasturnatul lor sunt patrate perfecte (ex: 144 si 441). Se cere un algoritm eficient din punct de vederea al timpului de executie.
Exemplu: pentru intervalul [100,1000] sunt 10 astfel de numere.
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, x, r, k=0;
    cin >> a >> b;
    for (int i = sqrt(a); i <= sqrt(b); i++)
	
    {
        x = i * i; r = 0;
		
        while (x > 0)
        {
            r = r * 10 + x % 10;
            x = x / 10;
        }
        if(sqrt(r) == floor(sqrt(r))) k++;
    }
	
    cout << k;
	
    return 0;
}