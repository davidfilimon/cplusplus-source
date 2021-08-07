#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(){
	int r;

  srand (time(NULL));

  r = rand() % 884 + 1;
  
  cout << r;


  return 0;
		
}