/*
Se citeste un numar natural n. Sa se afiseze n patrate ca in exemplu:
pentru n=3 se vor afisa:
1
2 2
2 2
3 3 3
3 3 3
3 3 3
*/

#include <iostream>
using namespace std;

int main()
{
    int i, n, l, c;
	
    cin >> n;
	
    for (i = 1; i <= n; i++)
	
        for (l = 1; l <= i; l++)
        {
            for (c = 1; c <= i; c++)
            for (c = 1; c <= i; c++)
			
                cout << i;
				
            cout << endl;
        }
    return 0;
}
