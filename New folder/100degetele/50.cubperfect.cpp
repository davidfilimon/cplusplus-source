/*
Se citeste un numar natural n. Sa se determine daca este cub perfect.
*/


#include <iostream>
using namespace std;
int main()
{
	int n, i;
	
	cin >> n;
	
	i=1;
	
	while (i * i * i < n) i++;
	
		if (n == i * i * i) cout << "da";
	
		else cout << "nu";
	
	return 0;
	
}