/*
Se citesc un numar natural n si o cifra c. Eliminati toate aparitiile cifrei c din numarul n si afisati numarul astfel obtinut.
Exemplu: n= 2345324 , c=2 rezulta numarul 34534
*/

#include <iostream>
using namespace std;

int main()
{
    int n, c, p = 1, x = 0;
	
    cout << "n=";
	cin >> n;
	
    cout << "c=";
	cin >> c;
	
    while (n != 0)
    {
        if (n % 10 != c)
        {
            x = x + n % 10 * p;
            p = p * 10;
			cout << x << endl;
        }
		
        n = n / 10;
    }
    cout << x;
	
    return 0;
}