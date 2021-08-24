/*
Se citesc numere naturale pana cand se introduce numarul 0. Afisati suma obtinuta prin adunarea numerelor formate din primele doua cifre ale numerelor citite. Numerele cu mai putin de 2 cifre nu se iau in considerare.
Exemplu: daca se introduc numerele 3455 66 7 8 22 11221 0 atunci se va afisa 133(=34+66+22+11)
*/


#include <iostream>
using namespace std;

int main()
{

    int n, s=0;
    cin >> n;
	
    while (n != 0)
    {
        if(n > 9) 
		
        {
            while(n > 99) n = n / 10; 
			
            s = s + n;
			
        }
		
        cin >> n;
    }
	
    cout << s;
    return 0;
}