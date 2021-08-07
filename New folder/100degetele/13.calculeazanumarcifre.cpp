/*
13.Sa se citeasca un numar n intreg de la tastatura. Sa se contorizeze cate cifre sunt in numarul n si sa se afiseze numarul lor.
*/
#include <iostream>
using namespace std;
int main(){
	int n, nr = 0;
	cin >> n;
	
	while (n>0){
		n = n/10;
		cout << n << endl;
		nr = nr + 1;
	}
	cout << nr;
}