/*
Se citeste un numar natural n. Afisati cifra maxima a lui n si de cate ori apare ea in numarul n.
Exemplu: Pentru n=457170 se va afisa 7 2 (7 e cifra maxima si ea apare de 2 ori)
*/


#include <iostream>
using namespace std;

int main()
{
    int n, max = 0, ap;
	
    cin >> n;
	
    if (n == 0) cout << "0 1";
	
    else
	
    {
	
        while (n > 0)
		
        {
		
            if (n % 10 > max) {max = n % 10; ap = 1;}
			
            else if (n % 10 == max) ap++;
			
            n = n / 10;
			
        }
		
        cout << max << " " << ap;
		
    }
	
    return 0;
	
}