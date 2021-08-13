/*
Se citesc numere naturale pana cand se introduce numarul 0. Sa se afiseze cel mai mare numar citit.
*/

#include <iostream>

using namespace std;
int main()
{
	int x, max;
	
	cin >> x;
	
	max = x;
	
	while (x != 0)
	
	{
	
		if (x > max) max = x;
		
			cout << "x=";
			cin >> x;
	}
	cout << max;
	
	return 0;
}