/*
Se citeste un numar natural n si apoi n numer naturale. Sa se determine cate dintre cele n numere citite au proprietatea ca au numarul de divizori egal cu pozitia pe care au fost citite.
Exemplu:
6
1 4 8 10 12 18
Rezultatul este 3 deoarece:
- 1 are un divizor si a fost citit pe pozitia 1
- 10 are 4 divizori si a fost citit pe pozitia 4
- 18 are 6 divizori si a fost citit pe pozitia 6
*/


#include <iostream>
using namespace std;

int main()
{
    int i, n, x, k = 0;
	
    cout << "n=";
	cin >> n;
	
    for (i = 1; i <= n; i++)
	
    {
	
        cin >> x;
		
        int nr = 0;
		
        for(int d = 1; d <= x; d++)
		
            if(x % d == 0) nr++;
			
        if(nr == i) k++;
		
    }
	
    cout << k;
	
    return 0;
}