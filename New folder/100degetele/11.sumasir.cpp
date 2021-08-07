/*
11.Sa se citeasca intreg n de la tastatura. Sa se calculeze suma = 1 + 3/1*2 + 5/(1*2*3) +...+ (2n-1)/1*2*3*...*n. Sa se afiseze suma.
*/

#include <iostream>
using namespace std;
int main(){
	int n;
	float suma = 0;
	int produs = 1;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		
		for (int j = i; j <= i; j++){
			
			produs = produs * j;
		} 
		suma = suma + (2*i - 1)/((float)produs);
	}
	cout << suma;
	
}