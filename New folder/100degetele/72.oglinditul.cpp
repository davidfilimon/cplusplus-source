/*
Se citeste un numar natural n. Calculati si afisati rasturnatul (oglinditul) sumei cifrelor lui n.
Exemplu: Pentru n=34565 se va afisa 32 (suma cifrelor este 23, iar rasturnatul lui 23 este 32).
*/


#include <iostream>
using namespace std;

int main()
{
    int n, s=0, r=0;
	
    cin >> n;
	
    while (n > 0) {s = s + n % 10; n = n / 10;}
	
    while (s > 0) {r = r * 10 + s % 10; s = s / 10;}
	
    cout << r;
	
    return 0;
}