/*
Se citeste un numar natural n impar. Sa se afiseze primele n perechi de numere consecutive a caror suma este divizibila cu n.
Ex: pentru n=3 se afiseaza perechile
1 2
4 5
7 8
*/


#include <iostream.h>

int main()
{ int n, x=1, k=0;

  cin >> n;
  
  while (k < n)
  
  { if((x + x + 1) % n == 0) { 
  
	cout << x << " " << x+1 << endl;
		 k++;
		}
		
    x=x+1;
  }
  
}
