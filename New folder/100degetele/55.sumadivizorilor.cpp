/*
Se citesc n numere naturale. Sa se afiseze cel care are suma divizorilor maxima.
*/


#include <iostream>

using namespace std;

int main(){
	int i, n, x, max=0, mx, s=0, d;

 cin >> n;
 
 for(i=1; i<=n; i++)
 {
   cin >> x;
   s=0;
   
   for(d=1; d<=x; d++) 
	   
     if(x % d == 0) s++;
	 
   if(s > max) { max = s;
   
               mx = x;
               }      
 }
 cout << mx << " " << max;
 
 system("pause");
 
 return 0;
} 

