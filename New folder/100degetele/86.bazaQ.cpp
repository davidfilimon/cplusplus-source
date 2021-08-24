/*
Se citeste un numar n si un numar q, q din intervalul [2,9]. Verificati daca n este corect scris in baza q.
Exemple:
pentru n=1372, q=9 raspunsul este da
pentru n=1237, q=7 raspunsul este nu
*/

#include <iostream>
using namespace std;

int main()
{
    int n, q, ok = 1;
	
    cout<< "n=";
	cin >> n;
	
    cout<< "q=";
	cin >> q;
	
    while(n != 0)
	
    {
	
        if(n % 10 >= q) ok = 0;
		
        n = n / 10;
		
    }
	
    if(ok == 1) cout << "da";
	
    else cout << "nu";
	
    return 0;
}