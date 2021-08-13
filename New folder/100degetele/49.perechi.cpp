/*
Se citeste un numar natural k. Gasiti toate perechile de numere x si y cu proprietatea ca x*x-y*y=k.
Exemplu:
Pentru k=15 exista 2 perechi (8,7) si (4,1).
*/


#include <iostream>
using namespace std;

int main()
{
	int k, a, b, x, y;
	
	cin >> k;
	
	for(a=1; a<=k; a++)
	
		for(b = a + 1; b <= k; b++)
		
			if(k % a == 0 && k % b == 0)
			
			{
			
				x =(a + b ) / 2;
				
				y =(b - a) / 2;
				
				if(x * x - y * y == k) 
				
					cout << x << " " << y << endl;
				
			}
			
	return 0;
	
}