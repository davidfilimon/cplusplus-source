/*
8.Sa se citeasca doua numere de la tastura si sa se calculeze suma lor daca sunt amandoua >0, produsul lor daca sunt amandoua <0 si diferenta lor daca sunt unu >0 si celalalt <0.
*/

#include <iostream>
using namespace std;

//declararare
int main(){
	int a, b;
	cin >> a >> b;
	
	if (a >= 0 && b >= 0){ cout << a*b;
	} else if (a < 0 && b < 0){ cout << a+b;
	
	} else if (a < 0 && b >= 0) { cout << a-b;
	
	} else if (a >= 0 && b < 0) { cout << a-b;
	
	}
}
	