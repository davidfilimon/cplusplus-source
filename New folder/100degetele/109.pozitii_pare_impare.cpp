/*
Se citeste un vector cu n elemente numere intregi, n fiind cel mult egal cu 1000. Parcurgeti si afisati elementele vectorului astfel: intai elementele de pe pozitii pare in ordiena din vector, iar pe linia urmatoare elementele de pozitii impare in ordine inversa din vector. Indexarea elementelor din vector incepe cu 1.
Exemplu: Pentru n=7 si vectorul cu elementele {5, 3, 5, 2, 7, 6, 4} se vor afisa elementele astfel:
3 2 6
4 7 5 5
*/


#include <iostream>
using namespace std;

int main()
{
    int A[1001], n;
	
    cin >> n;
	
    for (int i = 1; i <= n; i++)
	
        cin >> A[i];
		
    for (int i = 2; i <= n; i = i + 2)
	
        cout << A[i] << " ";
		
    cout << endl;
	
    int s = n;
	
    if (s % 2 == 0) s--;
	
    for (int i = s; i >= 1; i = i - 2)
	
        cout << A[i] << " ";
		
    return 0;
}