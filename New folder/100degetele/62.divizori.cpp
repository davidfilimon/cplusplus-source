/*
Se citesc două numere naturale a și b (a mai mic decât b) având cel mult 9 cifre fiecare. Afișați câte numere din intervalul [a,b] au exact 3 divizori.
Exemplu:
În intervalul [11,50] numerele care au exact 3 divizori sunt 25 și 49, deci se va afișa 2.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0, a, b;
	
    cin>> a >> b;
	
    int x = sqrt(a), y = sqrt(b);
	
    if(sqrt(a) != floor(sqrt(a))) x++;
	
    for(int i=x; i<=y; i++)
	
    {
	
        int p = 1;
		
        if(i == 0 || i == 1) p = 0;
		
        else if(i % 2 == 0 && i > 2) p = 0;
		
             else for(int d = 3; d * d <= i; d = d + 2)
			 
                        if(i % d == 0) p = 0;
						
        if (p) n++;
    }
	
    cout << n;
	
    return 0;
	
}