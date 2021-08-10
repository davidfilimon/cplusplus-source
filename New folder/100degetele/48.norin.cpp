/*
Pentru un numar natural n citit de la tastatura sa se afiseze n*n numere astfel:
1 2 3 ... n
2 3 4 ... n+1
3 4 5 ... n+2
......
n n+1 n+2 ... 2n-1
*/

#include<iostream>
using namespace std;

int main()
{
	int n = 10, i, j;
	
	for(i = 1; i <= n; i++) 
	{
		
		for(j = 1; j <= n; j++) cout << i+j-1 << " ";
		
		cout << endl;
	}
	return 0;
}