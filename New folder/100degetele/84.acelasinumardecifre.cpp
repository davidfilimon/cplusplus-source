/*
Se citesc doua numere naturale n si x. Fara a le transforma in baza 2 sau a numara cifrele, determinati daca n si x au acelasi numar de cifre cand sunt scrise in baza 2.
Exemplu: 6 si 9 nu au acelasi numar de cifre daca sunt trecute in baza 2, iar 17 si 29 da.
*/

#include <iostream>
using namespace std;

int main()
{
int x,n,px = 1,pn = 1;

  cin >> n >> x;
  
  while (pn <= n) pn = pn*  2;
  
  while (px <= x) px = px * 2;
  
  if (pn == px) cout << "da";
  
  else cout << "nu";
  
    return 0;
}