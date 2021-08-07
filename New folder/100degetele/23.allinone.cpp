#include <iostream>
#include <cmath>
using namespace std;

void NumeFunctie() { 
	cout << "Sunt rulat din functie!";
}

int main()
{
// 1.Input & Output
	cout << "### 1.Input & Output ###" << endl;
	
	int n;
	
	cout << "Introduceti numarul: ";
	
	cin >> n;
	
	cout << "Numarul introdus este " << n << endl;

// 2.Variables & Data Types
cout << "### 2.Variables & Data Types ###" << endl;

	int a1;
	float a2;
	bool a3;
	char a4;
	string a5;
	
	a1=3;
	a2=3.5;
	a3=true;
	a4='e';
	a5="Salut ";
	
	cout << "Variabila a1 are valoarea " << a1 << endl;
	
	cout << "Variabila a2 are valoarea " << a2 << endl;
	
	cout << "Variabila a3 are valoarea " << a3 << endl;
	
	cout << "Variabila a4 are valoarea " << a4 << endl;
	
	cout << "Variabila a5 are valoarea " << a5 << endl;
	
// 3.Operators
cout << "### 3.Operators ###" << endl;
	int b1;
	float b2;
	bool b3;
	char b4;
	string b5;
	
	a1=10;
	a2=12.7;
	a3=false;
	a4='m';
	a5="David.";
	
	cout << a1 + b1 << endl;
	
	cout << a1 * b2 << endl;
	
	cout << a1 - b1 << endl;
	
	cout << a1 % 2 << endl;
	
	cout << a2 * 2 << endl;
	
	cout << a3 * b3 << endl;
	
	cout << a5 + b5 << endl;
	
	cout << b1 / a2 << endl;
	
// 4.Strings
cout << "### 4.Strings ###" << endl;
	string txt;
	
	cin >> txt;
	
	cout << "Textul are lungimea " << txt.size() << endl;
	
		if (txt.size() == 100){ cout << "Felicitari" << endl;
	}

// 5.Math
cout << "### 5.Math ###" << endl;

cout << "Maximum este " << max(a1, b1) << endl;

cout << "Minimum este " << min(a1, b1) << endl;

cout << "Radacina patrata este " << sqrt(a1) << endl;

cout << "Intregul numarului este " << round(b2) << endl;

cout << "Logaritmul numarului este " << log(b1) << endl;


// 6.Boolean
cout << "### 6.Boolean ###" << endl;

cout << "a3 AND b3 este egal cu " << (a3 && b3) << endl;

cout << "a3 OR b3 este egal cu " << (a3 || b3) << endl;

cout << "NOT a3 este egal cu " << (!a3) << endl;

// 7.If then Else
cout << "### 7. If then Else ###" << endl;

if (a1 < b1) {
	
  cout << "Buna dimineata!";
  
} else if (a1 == 0) {
	
  cout << "Buna ziua!";
  
} else {
	
  cout << "Buna seara!";
  
  cout << endl;
}

// 8.Switch
cout << "### 8.Switch ###" << endl;

int ziuadeastazi;

cout << "In ce zi suntem astazi (1-7)?" << endl;

cin >> ziuadeastazi;

switch (ziuadeastazi){
case 1:
	cout << "1.Luni" << endl;
	break;
case 2:
	cout << "2.Marti" << endl;
	break;
case 3:
	cout << "3. Miercuri" << endl;
	break;
case 4:
	cout << "4. Joi" << endl;
	break;
case 5:
	cout << "5. Vineri" << endl;
	break;
case 6:
	cout << "6. Sambata" << endl;
	break;
case 7:
	cout << "7. Duminica" << endl;
	break;
}
cout << endl;

// 9.Loop
	cout << "### 9.Loop ###" << endl;
	
		for (int i = 0; i <= 100; i++) {
			
			cout << 'a';
}
cout << endl;
 
// 10.Break & Continue
cout << "### 10.Break & Continue ###" << endl;

for (int i = 0; i < 10; i++) {
	
  if (i == 4) {
	  
    break;
  }
  cout << i << " ";
}
for (int i = 0; i < 10; i++) {
	
  if (i == 4) {
	  
    continue;
  }
  cout << i << " ";
  
}

cout << endl;

// 11.Arrays
cout << "### 11.Arrays ###" << endl;

string masini[4] = {"Volvo", "BMW", "Ford", "Mazda"};

masini[0] = "Opel";

for (int i = 0; i < 4; i++){
	
	for (int j = 0; j < masini[i].size(); j++)
	{
		cout << masini[i][j] << "_";
	}
	
	cout << endl;
}

// 12.Functions
cout << "### 12.Functions ###" << endl;

NumeFunctie();

cout << endl;
}