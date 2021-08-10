/*
Folosind operatorul conditional, determinati daca o valoare x apartine intervalului [a,b]. Variabilele a, b si x se citesc de la tastatura, iar rezultatul va fi afisat sub forma "DA" sau "NU".
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
	
    cin >> a >> b >> x;
	
    cout << (x >= a && x <= b ? "DA":"NU");
	
    return 0;
}