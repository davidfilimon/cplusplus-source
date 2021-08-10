/*
Se citesc 3 numere naturale h, m si x cu urmatoarele semnificatii: h reprezinta ora, m minutele, iar x un numar de minute. Afisati ora rezultata daca scadem x minute din ora h:m. Ora h este in intervalul [0,23], minutele m intre 0 si 59, iar x este un numar cu cel mult 5 cifre.
Exemple:
Pentru h=2 m=30 x=150 se va afisa 0 0
Pentru h=2 m=30 x=1440 se va afisa 2 30 (practic cu exact o zi in urma)
*/


#include <iostream>
using namespace std;

int main()
{
    int h, m, x;
	
    cin >> h >> m >> x;
	
    int o = (h * 60 + m - x) / 60;
	
    int n = (h * 60 + m - x) % 60;
	
    if (n < 0)
    {
        n = 60 + n;
        o--;
    }
    if(o < 0) o = 24 + o % 24;
	
    cout << o << " " << n;
	
    return 0;
}