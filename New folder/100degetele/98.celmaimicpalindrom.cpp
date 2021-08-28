/*
Se citesc 2 numere naturale a si b, a mai mic decat b. Afisati cel mai mic numar palindrom din intervalul [a,b].
*/

#include<iostream>
using namespace std;

int main()
{
	int a, b, x, y, r;
	
	cout << "a=";
	cin >> a;
	
	cout << "b=";
	cin >> b;
	
	for (x = a; x <= b; x++)
	{
		r = 0;
		y = x;
		
		while (y > 0)
		{
		
			r = r * 10 + y % 10;
			y = y / 10;
			
		}
		
		if (r == x) 
			{
			
			cout << x;
		    x = b + 1;
			
			} 
	}
	return 0;
}