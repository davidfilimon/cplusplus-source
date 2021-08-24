/*
Fisierul text nr.txt contine pe o singura linie, separate prin cate un spatiu, cel mult 100 de numere intregi, fiecare numar avand cel mult 4 cifre. Scrieti un program C/C++ care citeste numerele din fisierul nr.txt si afiseaza pe ecran, separate prin cate un spatiu, in ordine crescatoare, toate numerele naturale nenule din fisier. Daca nu exista astfel de numere se va afisa pe ecran mesajul NU EXISTA.
Exemplu: daca fisierul nr.txt contine numerele: -3 -10 0 7 -5 7 51 -800 6 3798,
atunci pe ecran se va afisa: 6 7 7 51 3798
*/

#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("nr.txt");

int main()
{
int v[100], n = 0, x, i, j, aux;
n = 0;

while (fin >> x)
{
    if (x > 0)
	
       {v[n] = x;
	   
	n = n + 1;
	
        }
}
if (n == 0)

    cout << "nu exista";
	
else

    for (i = 0; i <= n - 2; i++)
	for (j = i+1; j <= n-1; j++)
	    {
	     if(v[i] > v[j])
		 
		{
		
		 aux=v[i];
		 
		 v[i]=v[j];
		 
		 v[j]=aux;
		 
		}
		
	    }
		
for (i = 0; i <= n - 1; i++)

	cout << v[i] << " ";
	
return 0;
}