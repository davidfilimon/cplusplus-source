/*
Se citeste un vector A cu n (n<=1000) elemente numere naturale. Afisati numarul de perechi de elemente din vector care au suma divizibila cu n.
Exemplu: n=4, A={2, 6, 8, 10} => 3, adica perechile (2, 6) , (2, 10) si (6,10)
*/

#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, c = 0;
    cin >> n;
	
    for(int i = 1; i <= n; i++)
	
        cin >> A[i];
		
    for(int i = 1; i < n; i++)
	
        for(int j = i + 1; j <= n; j++)
		
            if((A[i] + A[j]) % n == 0) c++;
			
    cout << c;
	
    return 0;
