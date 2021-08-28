/*
Se citeste un vector A cu n (n<=1000) elemente numere naturale. Ordonati descrescator elementele care au suma cifrelor numar par si in ordine crescatoare pe cele care au suma cifrelor numar impar. Pozitiile pe care sunt elemente cu suma cifrelor para (respectiv impara) trebuie sa ramana aceleasi. Afisati vectorul ordonat ca in cerinta.
Exemplu: n=6, A={33, 56, 77, 734, 45, 34} => 734 34 77 33 45 56
*/

#include <iostream>

using namespace std;

int main()
{
    int n, A[1001], S[1001];
	
    cin >> n;
	
    for(int i=1; i<=n; i++)
    {
        cin >> A[i];
		
        int s = 0, x = A[i];
		
        while (x > 0)
        {
		
            s = s + x % 10;
            x = x / 10;
			
        }
		
        S[i] = s;
    }
	
    for(int i = 1; i < n; i++)
	
        for(int j = i + 1;j<=n;j++)
		
        if(S[i] % 2 == 0 && S[j] % 2 == 0 && A[i] < A[j] || S[j] % 2 == 1 && S[i] % 2 == 1 && A[i] > A[j])
		
        {
            int aux = A[i];
			A[i] = A[j];
			A[j] = aux;
			
                aux = S[i];
				S[i] = S[j];
				S[j] = aux;
				
        }
		
    for(int i = 1; i <= n; i++)
	
            cout << A[i] << " ";
			
    return 0;
}

