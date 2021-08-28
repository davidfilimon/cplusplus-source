/*
Se citeste un vector A cu n (n<=1000) elemente numere naturale. Afisati numarul de perechi egal departate de capetele vectorului care au proprietatea ca incep cu aceeasi cifra.
Exemplu: n=6, A={34, 56, 77, 733, 45, 3} => 2, adica perechile (34, 3) si (77, 773)
*/

#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, c = 0;
	
    cin >> n;
	
    for(int i = 1; i <= n; i++)
	
        cin >> A[i];
		
    for(int i = 1,j = n; i < j; i++, j--)
	
    {
	
        int x = A[i];
		
        while(x > 9) x = x / 10;
		
        int y = A[j];
		
        while(y > 9) y = y / 10;
		
        if(x == y) c++;
		
    }
	
    cout << c;
	
    return 0;
