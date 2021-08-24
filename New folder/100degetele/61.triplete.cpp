/*
﻿Se citește un număr natural n. Afișați toate tripletele de numere naturale x, y, z (1<x<y<z<n) care sunt divizori ai lui n și care au proprietatea că x+y+z=n.
Programul va afișa pe ecran pe rânduri separate câte un triplet conform cerinței, numerele din triplet fiind in ordine strict crescatoare și separate prin cate un spațiu. Dacă nu există nici un astfel de triplet, atunci se va afișa pe ecran nu exista.
Exemple:
Pentru n=24 se obtin 4 8 12.
Pentreu n=20 se afiseaza nu exista.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
	
    cin >> n;
	
    if(n % 6 == 0)
		
		cout << n / 6 << " " << n / 3 << " " << n / 2;
	
    else cout << "nu exista";
	
    return 0;
}
