/*
Afisati toate perechile de numere de la 1 la n care au proprietatea ca au aceeasi suma a cifrelor
*/

#include <iostream>
using namespace std;
int main()
{
	int n, i, j, x, y, si, sj;
	
	cin >> n;
	
	for (i = 1; i <= n; i++)
	
		for (j = i + 1; j <= n; j++)
		
		{
		
			x = i;
			
			si = 0;
			
			while (x > 0)
			
			{
			
				si = si + x % 10;
				
				x = x / 10;
				
			}
			
			y = j;
			
			sj = 0;
			
			while (y > 0)
			{
			
				sj = sj + y % 10;
				
				y = y / 10;
				
			}
			
			if (si == sj) cout << i << " " << j << endl;
			
		}
		
	return 0;	
	
}