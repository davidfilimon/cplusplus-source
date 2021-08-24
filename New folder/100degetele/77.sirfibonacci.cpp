#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n = ";
	
    cin >> n;
	
    int nr_2, nr_1, nr_0;
	
    nr_0 = 1;
    nr_1 = 1;
	
    cout << nr_0 << "\n" << nr_1 << "\n";
	
    for(int i = 3; i <= n; i++)
	
    {
	
        nr_2 = nr_1 + nr_0;
		
        nr_0 = nr_1;
		
        nr_1 = nr_2;
		
        cout << nr_2 << "\n";
    }

    return 0;
}