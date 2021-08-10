/*
Folosind operatorul conditional, verificati daca un an n este bisect sau nu.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
	
    cin >> n;
	
    cout << (n % 4 == 0 && n % 100 ! = 0 || n % 400 == 0 ? "bisect" : "nebisect");
	
    return 0;
	
}