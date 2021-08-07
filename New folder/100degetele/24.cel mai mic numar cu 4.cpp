#include <iostream>
using namespace std;

int main(){
	int a = 10, b = 30, c = 7, d = 51;
	
	if (a < b && a < c && a < d){ cout << "Cel mai mic numar este " << a;
	} else if ( b < a && b < c && b < d) { cout << "Cel mai mic numar este " << b;
	
	} else if ( c < a && c < d && c < b) { cout << "Cel mai mic numar este " << c;
	
	} else if ( d < a && d < c && d < b) { cout << "Cel mai mic numar este " << d;
	}
}
	