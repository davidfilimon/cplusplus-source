/*
Se citesc doua numere naturale a si b. Afisati toate perechile de numere x si y din intervalul [a,b] care au proprietatea ca sunt prime intre ele, dar x si y nu sunt numere prime (exemplu 14 si 25 sunt prime intre ele, dar nici 14 si nici 25 nu sunt numere prime).
*/


#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y;
	
    cout << "a=";
	cin >> a;
	
    cout << "b=";
	cin >> b;
	
    for (x = a; x < b; x++)
	
        for (y = x + 1; y <= b; y++)
		
        {
		
            int c = x, d = y;
			
            while (c != d)
			
                if (c > d) c = c - d;
				
                else d = d - c;
				
            int px = 1;
			
            for (int i = 2; i * i <= x; i++)
			
                    if (x % i == 0) px = 0;
					
            int py = 1;
			
            for (int i = 2; i * i <= y; i++)
			
                    if (y % i == 0) py = 0;
					
            if (c == 1 && px == 0 && py == 0) cout << x << " " << y << endl;
			
        }
		
    return 0;
}