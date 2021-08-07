#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;


int main(){
	int numere[5], r;
	srand(time(NULL));
	
	for (int i=0; i<=5; i++) {
		
		r = rand() % 49 + 1;
		
		numere[i] = r;
		
	}
	
		for (int i=0; i<=5; i++) {

		cout << numere[i] << " ";
		
	}
	
}
	