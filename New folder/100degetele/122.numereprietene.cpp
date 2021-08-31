/*
Doua numere naturale diferite a si b se numesc prietene daca suma divizorilor lui a fara a este egala cu b si suma divizorilor lui b fara b este egala cu a.
Scrieti un program care sa afiseze primele 3 perechi de numere prietene.
*/


#include <iostream>
using namespace std;
int main()
{
	int k, x, sd1, sd2, d;
	k = 0;
	x = 2;
	while (k < 3)
	{
		sd1 = 0;
		
		for (d = 1; d <= x / 2; d++)
		
			if (x % d == 0) sd1 = sd1 + d;
			
		sd2 = 0;
		
		for (d = 1; d <= sd1 / 2; d++)
		
			if (sd1 % d == 0) sd2 = sd2 + d;
			
		if (sd2 == x && x < sd1)
		
			{ cout << x << " " << sd1 << endl;
			
			         k++;
					 
		    }
			
		x++;
		
	}
	
	return 0;
}