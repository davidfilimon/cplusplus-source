/*
Se citeste un numar natural n. Calculati numerele care se pot obtine din n prin eliminarea unei singure cifre si afisati-l pe cel mai mare ditnre acestea.
Exemplu: din 45329 se obtine 5329 (e scel mai mare dintre numerele 4532 4539 4529 4329 5329)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, p = 1, maxx = 0;
    cin >> n;
	
    while (p <= n)
    {
        int x = n / (p * 10) * p + n % p;
		
        if (x > maxx) maxx = x;
		
        p = p * 10;
    }
	
    cout << maxx;
	
    return 0;
}