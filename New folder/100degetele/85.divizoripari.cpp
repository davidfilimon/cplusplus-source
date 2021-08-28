/*
Se citeste de la tastatura un numar natural n si apoi de pe a doua linie n numere naturale. Pentru fiecare dintre cele n numere citite afisati pe cate o linie divizorii pari, iar daca nu au afisati mesajul "nu are".
Ecemplu:
n=4
numerele 4 11 13 24
2 4
nu are
nu are
2 4 6 8 12 24
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x, d;
	
    cout<< "n=";
	
	cin >> n;
	
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
		
        if (x % 2 == 1) cout << "nu are";
		
        else
        {
            for (d = 2; d <= x; d = d + 2)
			
                if (x % d == 0) cout << d << " ";
				
            cout << endl;
			
        }
    }
    return 0;
}