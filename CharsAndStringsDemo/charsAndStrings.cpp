//============================================================================
// Name        : charsAndStrings.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Demo to demo the difference between characters and strings
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	char a[] = "This is a string literal";		// You can modify this, because this follows C funda. Here array is a sequence of characters.
	char *b = "This too is a string literal";  // You cannot modify this because in C++, an array is a constant array of characters.
	string c = "This is a string string literal";
	cout <<"Printing all 3 strings "<< endl;
	cout << a <<endl;
	cout << b <<endl;
	cout << c <<endl;

	char *d[] = { "abc", "def", "xyz"};
	cout << d[0] << endl;
	return 0;
}
