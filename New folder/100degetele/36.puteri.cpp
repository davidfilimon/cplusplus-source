<<<<<<< HEAD
/*
Se citesc doua numere naturale n si p. Afisati in ordine crescatoare toate puterile lui n care sunt mai mici sau egale cu p.
Exemplu:
Pentru n=4 si p=120 se vor afisa 1 4 16 64
*/

#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int x = 1;
    while(x <= p)
    {
        cout << x << " ";
        x= x*n;
    }
    return 0;
=======
/*
Se citesc doua numere naturale n si p. Afisati in ordine crescatoare toate puterile lui n care sunt mai mici sau egale cu p.
Exemplu:
Pentru n=4 si p=120 se vor afisa 1 4 16 64
*/

#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int x = 1;
    while(x <= p)
    {
        cout << x << " ";
        x= x*n;
    }
    return 0;
>>>>>>> 8f3f32fa87100d5b5083c29dcf42d7253d6bc60c
}