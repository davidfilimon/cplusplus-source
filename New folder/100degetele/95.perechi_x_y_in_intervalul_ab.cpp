#include <iostream>
using namespace std;

int main(){
	
	int a, b, x, y;
	
	cout << "a=";
	cin >> a;
	
    cout << "b=";
	cin >> b;
	
	for (x = a; x <= b; x++)
	
        for (y = x; y <= b; y++)
		
        {
		
            int c = x, d = y;
			
			cout << c << d << endl;
		
		}
		
		return 0;
		
}