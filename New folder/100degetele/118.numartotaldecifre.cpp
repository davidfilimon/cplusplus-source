/*
Se citeste un numar natural n si apoi n numere naturale. Afisati numarul total de cifre care compun numerele prime dintre cele n citite.
*/

#include<iostream>
using namespace std;
int main()
{
	int n, i, x, p, d, nc, nt=0;
	
	cout << "n=";
	cin >> n;
	
	for(i = 1; i <= n; i++)
	
	{
	
		cout << "x="; cin >> x;
		
		p = 1;
		
		if(x == 0 || x == 1) p=0;
		
		else for (d = 2; d <= x / 2; d++)
		
			     if(x % d == 0) p = 0;
				 
		if(p == 1)
		
		{
			nc = 0;
			
			while (x > 0)
			
			{
				nc++;
				
				x = x / 10;
			}
			
			nt=nt+nc;
			
		}
	}
	
	cout << nt;
	
	return 0;
}