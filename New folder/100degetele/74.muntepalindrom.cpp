/*
Scrieti un program eficient din punct de vedere al timpului de executie, care genereaza si scrie in fisierul text munte.txt, pe prima linie, separate prin cate un spatiu, toate palindroamele-munte de exact noua cifre. Un palindrom de are aspect de munte daca cifrele sale sunt strict crescatoare pana la jumatatea numarului(de exemplu 123454321, 123464321...).
Pe a doua linie in fisier se va scrie numarul de palindroame-munte generate.
*/


#include <fstream>
using namespace std;
ofstream fout ("munte.txt");

int main()
{
    int n=0;
	
    for (int i = 1; i <= 5; i++)
	
        for(int j = i+1; j <= 6; j++)
		
            for(int k = j+1; k <= 7; k++)
			
                for(int h = k+1;h <= 8; h++)
				
                    for(int g = h+1; g <= 9; g++)
					
                        { fout << i << j << k << h << g << h << k << j << i << " ";
						
                          n++;
                        }
     fout << endl << n;
	 
     fout.close();
	 
     return 0;
}