/*
Din fisierul numere.in se citeste un numar natural n (n<=100000) si apoi n numere naturale cu cel mult 9 cifre fiecare. Afisati in fisierul numere.out cea mai lunga secventa de cifre identice care se obtine prin lipirea celor n numere. Daca exista mai multe secvente de lungime maxima, atunci se va afisa cea mai din dreapta.
numere.in
12
36 611 1111 12 11000000 0 0 0 0 0 3333 43219
numere.out
00000000000
*/

#include <fstream>
using namespace std;
ifstream fin ("numere.in");
ofstream fout ("numere.out");

int main()
{
    int A[100001], n, lmax=0, cmax, l = 0, c = -1;
	
    fin >> n;
	
    for(int i=1; i <= n; i++)
	
        fin >> A[i];
		
    for(int i = n; i >= 1; i--)
	
        do
        {
            if(A[i] % 10 == c)
				
            {
                l++;
                if(l > lmax)
				
				{
				
				lmax = l;
				cmax = c;
				
				}
            }
			
            else
			
            {
                l = 1;
				
                c = A[i] % 10;
				
            }
            A[i] = A[i] / 10;
        }
		
        while (A[i] > 0);
		
    for (int i = 1; i <= lmax; i++)
	
        fout << cmax;
		
    return 0;
}