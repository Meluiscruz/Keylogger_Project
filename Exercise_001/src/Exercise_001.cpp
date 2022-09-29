//============================================================================
// Name        : Exercise_001.cpp
// Author      : Luis Cruz
// Version     : 1.0
// Copyright   : None
// Description : Using cin and cout keywords
//============================================================================

#include <iostream>
using namespace std;

int main(){
		int a = 10, b = 20;
		float c = 10.3, d = 60.234;

		cout << "Enter the values for a and b" << endl;
		cin >> a >> b;
		cout << "Value of a: " << a << endl << "Value of b: " << b << endl;
		cout << "Enter the values for c and d" << endl;
		cin >> c >> d;
		cout << "Value of c: " << c << endl << "Value of d: " << d;

		return 0;
}
