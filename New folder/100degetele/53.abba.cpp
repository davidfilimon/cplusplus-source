/*
Afisati toate numerele naturale de forma abba care sunt divizibile cu un numar natural n citit de la tastatura.
*/


#include <iostream>
using namespace std;

int main()

{ int n, a, x;

	cin >> n;
	
	for(a = 10; a <= 99; a++)
  {
	  x=(a * 10 + a % 10) * 10 + a / 10;
	  
	  if(x % n == 0)
		  
		  cout << x << " ";
	  
  }
  
  return 0;
  
}