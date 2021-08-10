<<<<<<< HEAD
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
	
=======
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
	
>>>>>>> 8f3f32fa87100d5b5083c29dcf42d7253d6bc60c
}