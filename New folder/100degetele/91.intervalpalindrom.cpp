/*
Se citesc doua numere naturale a si b. Calculati cate numere palindrom sunt din intervalul [a,b]. Un numar este palindrom daca are aceeasi valoare atat daca e citit de la stanga la dreapta cat si de la dreapta la stanga (de exemplu 12321).
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, k=0;
	
    cout << "a=";
	cin >> a;
	
    cout << "b=";
	cin >> b;
	
    for(int x = a; x <= b; x++)
    {
        int y = x;
        int r = 0;
		
        while (y > 0)
            {
                r = r * 10 + y % 10;
				
                y = y / 10;
            }
        if (x == r)
		
        {
		
            cout << x << " ";
			
            k++;
        }
    }
    cout << "sunt " << k << " palindroame in intervalul ["<<a<<", "<<b<<"]";
	
    return 0;
}