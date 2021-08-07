/*
Sa se citeasca un numar intreg de la tastatura. Sa se afle daca numarul intreg este numar armstrong si sa se afiseze ARMSTRONG sau NU.
*/


#include <cmath>
#include <iostream>
using namespace std;

int main() {
   int num=1;
   int originalNum;
   int n=0;
   int rezultat = 0;
   int putere;
   int x;
   
	for (int i = 0; i < 10000; i++){

	   while (originalNum != 0){
		   
		  originalNum /= 10;
		  
		  n++;
		  
		  originalNum = num;
		  

			while (originalNum != 0) {
		   
				x = originalNum % 10;

				putere = round(pow(x, n));
		  
				rezultat += putere;
		  
				originalNum /= 10;
				
						if (rezultat == num && num < 10000){
							
							cout << num << endl;
							
							num = num + 1;
							
							originalNum = num;
							
						} else { num++;
					}
				}
		}
   }
}