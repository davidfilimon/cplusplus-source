/*
Se citeste un numar natural p reprezentand perimetrul unui triunghi. Afisati toate tripletele de numere naturale care pot fi lungimile laturilor triunghiului de perimetru p.
Exemplu:
Daca p=10, solutii posibile sunt:
2 4 4
3 3 4
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, p;
	
	cin >> p;
	
	for(a = 1; a <= p / 2; a++)
	
		for(b = a; b <= p / 2; b++)
		
		{
			c = p - a - b;
			
			if(c >= b && a + b > c)
			
				cout << a << " " << b << " " << c << endl;
		}
		
		return 0;
}