/* Bubblesort (sau Sinkingsort) e cel mai simplu algoritm de sortare. 
   Sortarea se realizeaza prin comparatia elementului curent cu fiecare element al matricei.   
*/
#include <iostream>
using namespace std;

	
void bubbleSort(int[] matrice) {
		
	int n = matrice.length;
	int t = 0;
	
	for ( int i = 0; i < n; i++) {
		for ( int j = 1; j < (n - 1); j++) {
			
			if ( matrice[j-1] > matrice[j]) {
				
				t = matrice[j-1];
				matrice[j-1] = matrice[j];
				matrice[j] = t;
				
			}
		}
	}
}
	
int main()
{
		
	//declaratie
	int matrice[] = {3, 34, 11, 1 68, 45, 90};

	cout << "Matricea inainte de Bubblesort";
	
	for ( int i = 0; i <= matrice.length; i++) {
		
		cout << matrice[i] << ", ";
		
	}
	
	bubbleSort(matrice);
	
	cout << "\n";
	
	cout << "Matricea dupa Bubblesort";
	
	for ( int i = 0; i <= matrice.length; i++) {
		
		cout << matrice[i] << ", ";		
	}
	        
}