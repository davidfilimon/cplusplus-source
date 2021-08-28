/*
Se citeste un vector cu n elemente numere intregi, n fiind cel mult egal cu 1000. Parcurgeti si afisati elementele vectorului astfel: primul, ultimul, al doilea, penultimul, ...
Exemplu: Pentru n=7 si vectorul cu elementele {5, 4, 5, 2, 7, 6, 5} se vor afisa numerele: 5 5 4 6 5 7 2
*/

#include <iostream>
using namespace std;

int main()
{
    int A[1001], n;
	
    cin >> n;
	
    for(int i = 1; i <= n; i++)
	
        cin >> A[i];
		
    int i = 1, j = n;
	
    while (i < j)
    {
        cout << A[i] << " " << A[j] << " ";
		
        i++;
		j--;
    }
	
    if (i == j) cout << A[i];
	
    return 0;
