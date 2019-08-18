//============================================================================
// Name        : PointersDemo.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Demo to show pointers in C++
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	char *a = "This is a string in C++";
	cout << a << endl;
	/*cout << "You will get a warning (and a runtime fault) if you try to modify a, because string in C++ is a constant array of characters " << endl;
	a[0] = 'z';
	a[2] = 's';*/
	const char *b = "This is a string in C++";
	cout << "String is now declared as a constant character of arrays, changing the value that b points to will cause error" << endl;
	cout << b << endl;
	//b[3] = 'd';
	char c [] = "This is a string in C++";
	cout << "C points to a static array of characters, we can change its contents. This is allowed in C++ for compatibility with C" << endl;
	cout << c << endl;
	c[2] = 'Z';
	cout << c << endl;
	char const *ptr = "this is a string literal";
	cout << ptr << endl;
	cout << "Here ptr is a constant pointer, we cannot change the address to which ptr is pointing to. In this case it will be pointing to address of 't'" << endl;
	//*(ptr+2) = 'B';
	cout << ptr << endl;
	//char const *c = "this is something else";
	//ptr = &c;
	return 0;

}
