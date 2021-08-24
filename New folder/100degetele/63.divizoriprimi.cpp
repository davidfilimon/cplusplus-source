/*
Se citesc doua numere naturale a si b (a mai mic decat b). Afisati numerele din intervalul [a,b] care au proprietatea ca au numar maxim de divizori primi.
Exemplu: a=30, b=45 => 30, 42 (au cate 3 divizori primi, iar restul numerelor au mai putini)
*/


#include <iostream>
using namespace std;

int main()
{
    int a, b, max = 0;
	
    cin >> a >> b;
	
    for(int n = a; n <= b; n++)
	
    {
	
        int c = 0;
		
        int x = n, d = 2;
		
        while (x > 1)
		
            if (x % d == 0)
			
            {
                c++;
				
                while (x % d == 0) x = x/d;
            }
			
            else d++;
			
        if (c > max) max = c;
		
    }
	
    for (int n = a; n <= b; n++)
	
    {
	
        int c = 0;
        int x = n, d = 2;
		
        while (x > 1)
		
            if (x % d == 0)
			
            {
			
                c++;
				
                while (x % d == 0) x = x / d;
				
            }
			
            else d++;
			
        if (c == max) cout << n << " ";
		
    }
	
    return 0;
	
}