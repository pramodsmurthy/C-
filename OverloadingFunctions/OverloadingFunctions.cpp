//============================================================================
// Name        : OverloadingFunctions.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Demo to show Function Overloading in C++
//============================================================================

/* Two functions are overloaded if:
 * * They have the same function name and
 * * They have different argument count or
 * * They have different argument types
 */

#include <iostream>
using namespace std;

int power(int base, int e)
{
	int result = base;
	while (e-- > 1)
		result *= base;
	return result;
}

double power(double base, int e)
{
	int result = base;
	while (e-- > 1)
		result *= base;
	return result;
}

int main()
{
	double num, powerof, res;
	char decision;
	do{
		cout << "Enter the number" << endl;
		cin >> num;
		cout << "Enter the power of "<< endl;
		cin >> powerof;
		if (powerof == 0)
			res = 1;
		else
			res =  power( num, powerof );
		cout << num << " to the power of "<< powerof << " = " << res << endl;
		cout << "Do you wish to continue ? If so enter 'y' " << endl;
		cin >> decision;
	} while (decision == 'y' || decision == 'Y');
	return 0;
}

