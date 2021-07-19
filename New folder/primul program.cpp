#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cin >> x;
    
    for (int i = 1; i < 100; i = i+1) {
        
        if (i < x) { 
            
            cout << i << "\n";
        }
    }
}
