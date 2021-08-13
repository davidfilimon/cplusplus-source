#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main(){

	srand (time(NULL));
	int value;
	ofstream file ("1million.txt");
	int i = 0;
	
	while (i < 1000000)
	{
		i++;
		value = rand();
		file << value;
		cout << "*";
	}
	
	file.close();
}
	
	