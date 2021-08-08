/*
Folosind operatorul conditional, rezolvati o ecuatie de gradul al doilea cu coeficienti intregi cititi de la tastatura.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
	
    double d;
	
    cin >> a >> b >> c;
	
    d = b * b-4 * a * c;
	
    d < 0 ? cout << "fara solutie" : d==0 ? cout << - b / (2.0*a) : cout << (-b-sqrt(d)) / (2*a) << " " << (-b+sqrt(d)) / (2*a);
    
	return 0;
}