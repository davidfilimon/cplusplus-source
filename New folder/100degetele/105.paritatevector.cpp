/*
Se citeste un vector A cu n (n<=1000) elemente numere naturale. Verificati daca elementele vectorului alterneaza ca paritate, adica oricare doua elemente alaturate au paritati diferite. Raspunsul va fi DA in caz afirmativ, altfel va fi NU.
Exemple: n=6, A={34, 56, 77, 733, 44, 3} => NU
n=6, A={33, 56, 77, 734, 45, 34} => DA
*/

#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, ok = 1;
    cin >> n;
	
    for(int i = 1; i <= n; i++)
	
        cin >> A[i];
		
    for(int i = 1; i < n; i++)
	
        if(A[i+1] % 2 == A[i] % 2) ok = 0;
		
    if(ok == 1) cout << "DA";
	
    else cout << "NU";
	
    return 0;
}