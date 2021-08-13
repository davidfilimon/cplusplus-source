/*
Se citeste un numar natural p. Afisati toate tripletele de numere naturale care pot reprezenta lungimile laturilor unui triunghi isoscel cu perimetrul egal cu p.
Exemplu:
pt p=12 se obtin tripletele:
4 4 4
5 5 2
*/


#include <iostream>
using namespace std;

int main()
{
	int a, c, p;
	
	cin >> p;
	for(a = 1; a <= p / 2; a++)
		
		for(c = 1; c <= p / 2; c++)
			
			if(a + a + c == p && a + a > c)
				
				cout << a << " " << a << " " << c << endl;
			
	return 0;	
}
