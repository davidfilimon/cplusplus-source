/*
Se citeste un numar natural n. Sa se afiseze cea mai scurta descompunere a lui n ca suma de termeni distincti din sirul lui Fibonacci.
Exemplu: 45 se descompune ca 34+8+3
*/

#include <iostream>
using namespace std;

int fibmmn(int n)
{
    int x = 1, y = 1, z;
	
    while (x + y <= n)
    {
        z = x + y ;
		x = y;
		y = z;
    }
	
    return y;
}

int main()

{

    int n;
	
    cin >> n;
	
    while (n)
    {
        cout << fibmmn(n) << " ";
		
        n = n - fibmmn(n);
		
    }
	
    return 0;
}