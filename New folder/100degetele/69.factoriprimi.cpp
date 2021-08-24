/*
Se citesc doua numere naturale a si b. Afisati numarul care are cei mai multi factori primi. Daca ambele numere au acelasi numar de factori primi, atunci se va afisa oricare dintre ele.
Exemplu: pentru a=36, b=30 se va afisa 30 (30 are 3 factori primi: 2,3,5, iar 36 doar 2: 2 si 3)
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, x, nfa=0, nfb=0;
    cin >> a >> b;
    x = a;
    int d = 2;
    while(x > 1)
	
        if(x % d == 0)
		
        {
            nfa++;
			
            while(x % d == 0) x = x / d;
        }
        else d++;
		
    x = b;
    d = 2;
    while (x > 1)
	
        if(x % d == 0)
        {
            nfb++;
			
            while (x % d == 0) x = x / d;
        }
		
        else d++;
		
    if (nfa > nfb) cout << a;
	
    else cout << b;
	
    return 0;
}