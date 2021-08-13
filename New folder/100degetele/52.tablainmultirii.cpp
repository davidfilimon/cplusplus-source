/*
Sa se scrie un program care afiseaza tabla inmultirii de la 1 la 10.
*/


#include <iostream>
using namespace std;

int main()
{
	int i, j;
	for (i=1; i<=10; i++)
		
	{
		
		for (j=1; j<=10; j++)
			
			cout << i << " X " << j << " = " << i * j << endl;
			
        cout << endl;		
		
	}
	
    return 0;
	
}