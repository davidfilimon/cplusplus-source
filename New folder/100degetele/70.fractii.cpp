/*
Se citeste un numar natural n si apoi n numere naturale nenule cu cel mult 5 cifre fiecare. Afisati fractia ireductibila minima care se poate construi folosind numere dintre cele citite.
Exemplu: pentru n=5 si numerele 7 9 8 3 6 fractia este 1/3 (obtinuta din simplificarea fractiei 3/9)
*/


#include <iostream>
using namespace std;

int main()
{
    int n, x, min = 100000, max = 0;
    cin >> n;
	
    for(int i=1; i<=n; i++)
    {
        cin >> x;
		
        if(x < min) min = x;
		
        if(x > max) max = x;
    }
    int a = min, b = max;
	
    while (b != 0)
    {
        int r = a % b;
		a = b;
		b = r;
    }
    min = min / a;
	max = max / a;
	
    cout << min << "/" << max;
	
    return 0;
}
