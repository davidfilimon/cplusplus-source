/*
Numim secvență pară într-un șir o succesiune de termeni ai șirului cu proprietatea că sunt
numere pare și că se află pe poziții consecutive în șir; orice secvență are cel puțin doi
termeni și este maximală în raport cu proprietatea precizată (dacă i se adaugă un alt
termen, secvența își pierde această proprietate). Lungimea secvenței este egală cu
numărul termenilor săi.
Fişierul bac.txt conţine un şir de cel mult 106
 numere naturale din intervalul [0,109].
Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran numărul de secvențe pare de lungime maximă din șir.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie utilizat şi al
timpului de executare.
Exemplu: dacă fişierul bac.txt conţine valorile
1 2 3 4 6 10 2 8 5 7 9 4 6 10 121 20 4 11 10 2 5 2 6 8 10 16
se afişează pe ecran numărul 2.
a) Descrieţi în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b) Scrieţi programul C/C++ corespunzător algoritmului descris. 
*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");

int main()
{
    int n, x, l=0, c=0;
    fin >> n;
    while (fin >> x)
    {
        if (x % 2 == 0) l++;
		
        else
        {
            if (l >= 2) c++;
			
            l=0;
        }
    }
    if(l >= 2) c++;
	
    cout << c;
	
    return 0;
}