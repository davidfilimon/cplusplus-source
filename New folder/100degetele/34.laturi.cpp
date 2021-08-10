/*
Folosind operatorul conditional, determinati daca 3 numere reale a,b,c pot fi lungimile laturilor unui triunghi.
*/

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
	
    cin >> a >> b >> c;
	
    cout << (a + b > c && a + c > b && b + c > a ? "da":"nu");
	
    return 0;
}