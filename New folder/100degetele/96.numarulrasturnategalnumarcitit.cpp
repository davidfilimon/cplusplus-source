/*
Se citeste un numar natural n si apoi n numere naturale. Afisati cate dintre numerele citite au rasturnatul egal cu primul numar citit.
Ex:
se citesc numerele
7
231 78 132 30 132 8 132
se va afisa
3
*/

#include <iostream>
using namespace std;

int main()
{

    int i, n, x, y, k = 0, r;
	
    cin >> n;
	
    cin >> x;
	
    for (i = 1; i < n; i++)
	
        {
		
            cin >> y;
			
            r = 0;
			
            while (y > 0) {
			
			r = r * 10 + y % 10;
			y = y / 10;
			
			}
			
            if (r == x) k++;
			
        }
		
    cout << k;
	
    return 0;
}