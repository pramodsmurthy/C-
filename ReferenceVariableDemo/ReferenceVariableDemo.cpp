//============================================================================
// Name        : ReferenceVariable.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Demo to show Reference Variables in C++
//============================================================================

#include <iostream>

using namespace std;

void swap( int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "Enter value of a" << endl;
	cin >> a;
	cout << "Enter value of b" << endl;
	cin >> b;

	cout << "Value of a is " << a << " and b is " << b << endl;
	swap(a, b);
	cout <<"After swap values of a is " << a << " and b is " << b << endl;
	return 0;
}
