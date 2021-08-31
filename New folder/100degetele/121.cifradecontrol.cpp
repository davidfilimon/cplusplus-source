/*
Cifra de control a unui numar n se numeste cifra obtinuta calculand repetat suma cifrelor lui n si inlocuidu-l pe n cu suma calculata.
Pentru un numar natural n afisati cifra lui de control.
Exemplu:
pentru n=3429 calculam suma cifrelor 18, iar suma cifrelor lui 18 este 9, deci 9 este cifra de control a lui 3429.
*/

#include<iostream>
using namespace std;

int main()
{
	int n, s;
	
	cout << "n=";
	cin >> n;
	
	while (n > 9)
	
	{
	
		s = 0;
		
		while(n > 0)
		
		{
		
			s = s + n % 10;
			n = n / 10;
		}
		
		n = s;
		
	}
	
	cout << n;
}
