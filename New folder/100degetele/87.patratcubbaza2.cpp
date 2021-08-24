/*
Se citesc doua numere naturale a si b. Sa se afiseze toate numerele n din intervalul [a,b] care au proprietatea ca atat patratul cat si cubul lor trasformate in baza 2 au acelasi numar de cifre de 0.
Un astfel de numar este 6, deoarece 36 si 216 au acelasi numar de cifre de 0 in scrierea lor in baza 2.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, n, n2, n3, k1, k2;
	
    cout<< "a=";
	cin >> a;
	
    cout<< "b=";
	cin >> b;
	
    for(n = a; n <= b; n++)
	
    {   k1 = 0;
        k2 = 0;
        n2 = n * n;
        n3 = n * n * n;
		
        while (n2 != 0)
        {
            if (n2 % 2 == 0) k1++;
			
            n2 = n2 / 2;
        }
		
        while(n3 != 0)
		
        {
            if(n3 % 2 == 0) k2++;
            n3 = n3 / 2;
        }
		
        if(k1 == k2) cout << n << " ";
		
    }
	
    return 0;
}