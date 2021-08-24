/*
Se citesc numere naturale pana cand se introduce numarul 0. Afisati suma obtinuta prin adunarea primei si a ultimei cifre din fiecare numar citit. Numerele cu mai putin de 2 cifre nu se iau in considerare.
Exemplu: daca se introduc numerele 3455 66 7 8 23 11221 0 atunci se va afisa 27 (3+5+6+6+2+3+1+1).
*/

#include <iostream>
using namespace std;

int main()
{
    int n, s=0;
    cin >> n;
	
    while(n != 0)
    {
        if(n > 9)
        {
            s=s + n % 10;
			
            while (n > 9) n = n / 10;
			
            s=s + n;
        }
		
        cin>>n;
    }
	
    cout << s;
	
    return 0;
	
}