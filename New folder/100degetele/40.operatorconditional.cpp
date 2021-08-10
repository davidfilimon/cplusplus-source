/*
Folosind operatorul conditional, calculati de cate sticle de cate x litri fiecare este nevoie pentru a umple un vas de y litri.
Exemplu:
daca x=4 si y=20 , atunci e nevoie de 5 sticle
daca x=4 si y=23 , atunci e nevoie de 6 sticle
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
	
    cin >> x >> y;
	
    cout << (y % x == 0 ? y / x : y / x + 1 );
	
    return 0;
}