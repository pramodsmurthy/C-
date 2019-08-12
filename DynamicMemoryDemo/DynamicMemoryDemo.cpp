//============================================================================
// Name        : DynamicMemoryDemo.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Demo to show dynamic memory allocation in C++
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int *a;
	a = new int;
	p_arr = new int[100];
	cout << "Enter any value, it will be stored at a " << endl;
	cin >> *a;
	cout <<"Value of a is " << *a << endl;
	cout << "A is " << a << endl;
	delete a;
	int *b;
	b = new int;
	cout<<"B is "<< b <<endl;
	delete b;
/*
	for (int i = 0; i < 100; i++)
	{
		p_arr[i] = i+10;
	}
	for (int i = 0; i < 100; i++)
	{
		cout << *p_arr++ << endl;
	}
	delete []p_arr;
	p_arr = NULL;

	a = NULL;*/
	return 0;
}
