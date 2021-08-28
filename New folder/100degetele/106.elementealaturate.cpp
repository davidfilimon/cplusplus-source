/*
Se citeste un vector A cu n (3<=n<=1000) elemente numere naturale. Verificati daca exista cel putin 3 elemente alaturate care sa aiba aceeaai paritate . Raspunsul va fi DA in caz afirmativ, altfel va fi NU.
Exemple: n=6, A={34, 56, 77, 733, 45, 3} => DA
n=6, A={33, 56, 77, 734, 45, 33} => NU
*/

#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, gasit = 0;
    cin >> n;
	
    for(int i = 1; i <= n; i++)
	
        cin>>A[i];
		
    for(int i=2;i<n;i++)
	
        if(A[i-1] % 2 == A[i] % 2 && A[i] % 2 == A[i+1] % 2)
		
            gasit = 1;
			
    if(gasit == 1) cout << "DA";
	
    else cout << "NU";
	
    return 0;
}