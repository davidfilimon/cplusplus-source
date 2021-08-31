/*
Se citeste un numar natural n. Afisati cele 2 numere obtinute prin impartirea "la mijloc" a numarului n.
Exemple: n=12345 se afiseaza 12 si 345
n= 12345678 se afiseaza 1234 5678
*/

#include<iostream>
using namespace std;

int main()
{
	int n, x, p, nc, i;
	cin >> n;
	x = n;
	nc = 0;
	
	while (x)
	
	{ nc++;
	
	  x = x / 10;
	  
	}
	
	if(nc % 2 == 0) nc = nc / 2;
	
	else nc = nc / 2 + 1;
	
	p = 1;
	
	for(i = 1; i <= nc; i++) p = p * 10;
	
	cout << n / p << " " << n % p;
	
	return 0;
}