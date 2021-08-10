/*
Se citeste o valoare naturala s reprezentand o suma de bani si apoi trei valori naturale a, b si c reprezentand valorile a trei tipuri de bancnote.
Afisati pe randuri separate toate modurile in care se poate plati suma de bani folosind bancnote de valorile date.
Exemplu:
s=100, a=5, b=10, c=50
o posibila descompunere este 6 de 5, 2 de 10, 1 de 50
*/

#include <iostream>
using namespace std;

int main()
{
    int s, a, b, c;
    cin >> s >> a >> b >> c;
    for(int i=0; i <= s / a; i++)
		
        for(int j=0; j <= s / b; j++)
			
            for(int k=0; k <= s / c; k++)
				
                if(i*a + j*b + k*c == s)
					
                    cout << i << " de " << a << " + " << j << " de " << b << " + " << k << " de " << c << endl;
				
    return 0;
}