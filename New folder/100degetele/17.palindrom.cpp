/*
17.Sa se citeasca un numar intreg de la tastatura. Sa se afle daca numarul intreg este palindrom si sa se afiseze DA sau NU.si sa se afiseze.
*/
#include <iostream>
using namespace std;

int main(){

   int n; 
   int invers=0; 
   int copie;

   cin >> n;

   copie=n;

   while(n)

   {

       invers = invers*10 + n%10;

       n /= 10;

   }

   if(invers==copie)

       cout << "DA";

   else

       cout << "NU";

}