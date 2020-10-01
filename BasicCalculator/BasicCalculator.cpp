//============================================================================
// Name        : BasicCalculator.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Basic Calculator in C++
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	double var1, var2;
	beginning:
	system("cls");
	cout << "Enter value of variable1" << endl;
	cin >> var1;
	cout << "Enter value of variable2" << endl;
	cin >> var2;

	char operation;
	cout << "What you have to do calculate (Enter +, -, *, /)" << endl;
	cin >> operation;
	switch (operation) {
	case '+':
		cout << "Sum of " << var1 << " and " << var2 << " is " << (var1 + var2) << endl;
		break;
	case '-':
		cout << "Subraction of " << var1 << " and " << var2 << " is " << (var1 - var2) << endl;
		break;
	case '*':
		cout << "Multiplication of " << var1 << " and " << var2 << " is " << (var1 * var2) << endl;
		break;
	case '/':
		if (var2 != 0)
			cout << "Division of " << var1 << " and " << var2 << " is " << (var1 / var2) << endl;
		else
			cout << "Division by zero is not allowed" << endl;
		break;
	default:
		cout << "I dont understand this operation" << endl;
	}

	char decision;
	cout << "Do you want to continue "<< endl;
	cin >> decision;

	if (decision == 'y' || decision == 'Y')
		goto beginning;
	return 0;
}
