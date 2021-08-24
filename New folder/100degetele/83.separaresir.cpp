/*
Se considera sirul 1, 1, 2, 1, 2, 3, 1, 2, 3, 4 ...
Se citeste un numar natural n. Afisati separat prin cate un spatiu primii n termeni ai sirului dat.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n;
	
    k = (-1 + sqrt(1+8*n)) / 2;
	
    for (int i=1; i<=k; i++)
	
        for(int j=1; j<=i; j++)
		
            cout << j << " ";
			
    x=k * (k + 1) / 2 + 1;
	
    int j = 1;
	
    while(x <= n)
    {
	
        cout << j << " ";
		
        x++;
		
        j++;
    }
	
    return 0;
}