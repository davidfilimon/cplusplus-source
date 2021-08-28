/*
Se citeste un vector A cu n (n<=1000) elemente numere naturale. Ordonati crescator elementele prime si plasati-le la inceputul vectorului si apoi descrescator pe cele neprime, in a doua parte a vectorului. Afisati vectorul ordonat ca in cerinta.
Exemplu: n=7, A={33, 13, 77, 19, 5, 34, 100} => 5 13 19 100 77 34 33
*/

#include <iostream>
using namespace std;

int main()
{
    int n, A[1001], P[1001];
	
    cin >> n;
	
    for(int i = 1; i <= n; i++)
    {
        cin >> A[i];
		
        int p = 1, x = A[i];
		
        if (x == 0 || x == 1) p = 0;
		
        else if(x > 2 && x % 2 == 0) p = 0;
		
             else for(int d = 3; d * d <= x; d = d + 2)
			 
                    if (x % d == 0) p = 0;
					
        P[i] = p;
		
    }
	
    for (int i = 1; i < n; i++)
	
        for (int j = i + 1; j <= n; j++)
		
        if (P[i] == 1 && P[j] == 1 && A[i]>A[j] || P[j] == 0 && P[i] == 0 && A[i] < A[j] || P[i] == 0 && P[j] == 1)
		
        {
		
            int aux = A[i];
			A[i] = A[j];
			A[j] = aux;
			
                aux = P[i];
				P[i] = P[j];
				P[j] = aux;
				
        }
		
    for(int i = 1; i <= n; i++)
	
            cout << A[i] << " ";
			
    return 0;
	
}