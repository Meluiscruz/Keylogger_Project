//============================================================================
// Name        : logicalOperators.cpp
// Author      : Luis Cruz
// Version     : 1.0
// Copyright   : None
// Description : Use of comparison operators (if clauses)
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a = 10, b = 10;

	cout << "Enter value for a: ";
	cin >> a;
	cout << "Enter value for b: ";
	cin >> b;

	if( a > b )	//Translation to natural language: If a is grater than b, do ...
	{
		cout << "A is grater than B";
	}
	else if ( a == b )
	{
		cout << "A is equal to B";
	}
	else
	{
		cout << "A is less than B";
	}

	return 0;
}
