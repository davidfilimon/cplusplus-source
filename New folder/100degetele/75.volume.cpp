/*
Pentru numerotarea paginilor unei serii enciclopedice, formate din unul sau mai multe volume, se presupune ca se folosesc in total n cifre. Fiecare volum are exact 300 de pagini, cu exceptia, eventual, a celui din urma care ar putea avea mai putine. Numerotarea paginilor incepe cu 1 in fiecare volum.
Se citeste de la tastatura n, numarul de cifre (n are cel mult 9 cifre). Daca este posibil, sa se determine si sa scrie pe ecran, pe linii distincte, numarul de volume din serie si numarul de pagini ale ultimului volum. Daca nu este posibil se va scrie mesajul "imposibil".
Exemplu:
Pentru n=999 se vor obtine 2 volume, unul cu 300 de pagini si unul cu 105 pagini (deci se vor afisa 2 si 105 pe randuri separate).
Pentru n=900 nu se poate face numerotarea
*/


#include <iostream>
using namespace std;

int main()
{
    int n, k=0, v, ok=1;;
	
    cin >> n; // sunt 792 (9+180+603) cifre intr-un volum
	
    v = n / 792 + 1; // nr de volume
	
    n = n % 792 ; // nr de cifre din ultimul volum
	
    if (n < 9) k = n; // ramane de o cifra
	
    else
	
    {
        k = k + 9; // incap toate de o cifra
        n = n - 9; // scad cele numerotate cu o cifra
        if(n < 180)
		
			if(n % 2 != 0) ok = 0; // ultima nu se poate numerota cu 2 cifre
			
                  else k = k + n / 2; // se numeroteaza cu 2 cifre
        else
		
        {
            k = k + 90; // s-au numerotat toate cu 2 (90)
			
            n = n - 180; // s-au folosit 180 cifre
			
            if (n % 3 != 0) ok = 0; // nu se poate cu 3
			
            else k = k + n / 3; // se poate cu 3
        }
    }
    if (ok) cout << v << endl << k;
	
    else cout << "imposibil";
	
    return 0;
}