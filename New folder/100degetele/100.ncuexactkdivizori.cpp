/*
Se citeste un numar natural k, un numar natural n si apoi n numere naturale. Afisati cel mai mare dintre cele n numere citite care are exact k divizori.
*/


#include<iostream>
using namespace std;

int main()
{
	int k, n, i, x, d, nd, maxx=0;
	
	cout << "k=";
	cin >> k;
	
	cout << "n=";
	cin >> n;
	
    for(i=1; i <= n; i++)
	{
		cin >> x;
		
		nd = 0;
		
		for (d = 1; d <= x; d++)
		
			if (x % d == 0) 
			
				nd++;
				
		if (nd == k)
		
			if (x > maxx) maxx = x;
	}		
	cout << maxx;
	
	return 0;
