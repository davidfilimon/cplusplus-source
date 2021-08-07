/*
9.Sa se citeasca 3 numere intregi de la tastura si sa se afle daca ele pot fi laturile unui triunghi si sa se afiseze "DA" sau "NU".
*/

#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a + b > c && a + c > b && b + c > a){ cout << "DA";
} else cout << "NU";
}