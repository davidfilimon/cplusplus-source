/*
14.Sa se citeasca un numar intreg de la tastatura. Sa se calculeze suma cifrelor numarului intreg si sa se afiseze rezultatul.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	int suma = 0;
	cin >> n;
	while (n > 0){
		suma += n % 10;
		n = n / 10;
	}
	cout << suma;
	
}
	