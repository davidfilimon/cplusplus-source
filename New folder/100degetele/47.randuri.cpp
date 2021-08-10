/*
Se citeste numarul natural n. Afisati in ordine crescatoare numerele de la 1 la n*n pe n randuri a cate n numere fiecare.
Exemplu:
pentru n=4 se afiseaza
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

#include<iostream>
using namespace std;

int main()
{
	int n, i;
	
	cin >> n;
	
	for(i = 1; i <= n * n; i++) 
	{
		cout << i << " ";
		
		if(i % n == 0)
			
			cout << endl;
	}
	return 0;
}