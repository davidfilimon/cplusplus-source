/*
Sa se afiseze cifra care apare de cele mai multe ori intr-un numar natural n si de cate ori apare ea in n.
Exemplu: n=133121 se afiseaza 1 3
*/

#include<iostream>
using namespace std;

int main()
{
	int n, x, c, k, m = 0, cmax;
	
	cin >> n;
	
	for(c = 0; c <= 9; c++)
	{
		x = n;
		k = 0;
		
		while(x > 0)
		{
			if(x % 10 == c) k++;
			x = x / 10;
			
		}
		
		if(k > m) 
		
		{
		
			m = k;
			cmax = c;
		}
	}
	
	cout << cmax << " " << m;
	
	return 0;
}