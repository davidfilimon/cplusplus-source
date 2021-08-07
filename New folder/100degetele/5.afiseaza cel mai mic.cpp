/*
5.Sa se compare 3 numere si sa se afiseze cel mai mic.
*/

#include <iostream>

using namespace std;

int main(){
	
	//declaratie
	int a = 101, b = 11, c = 10;
	
	if (a < b) {
		if (a < c) { 
			cout << "Cel mai mic numar este " << a;
		} else {
			cout << "Cel mai mic numar este " << c;
		}
	} else 
		if (b < c){
		cout << "Cel mai mic numar este " << b;}
		else {
			cout << "Cel mai mic numar este " << c;
		
	}
}		