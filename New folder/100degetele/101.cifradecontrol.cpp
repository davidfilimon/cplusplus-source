/*
Cifra de control a unui numar n se numeste cifra obtinuta calculand repetat suma cifrelor lui n si inlocuidu-l pe n cu suma calculata.
Exemplu:
pentru n=3429 calculam suma cifrelor 18, iar suma cifrelor lui 18 este 9, deci 9 este cifra de control a lui 3429.
Dandu-se un numar natural n si o cifra x, afisati primele n numere naturale care au cifra de control egala cu x.
Exemplu:
pentru n=5 si x=7 se vor afisa numerele 7, 16, 25 , 34 si 43.
*/

#include<iostream>
using namespace std;

int main()
{
   int n, x, a;
   
   cout << "n=";
   cin >> n;
   
   cout << "x=";
   cin >> x;
   
   for(a = x; a <= x + (n - 1) * 9; a = a+9)
   
	   cout << a << " "; 
	   
	return 0;
}