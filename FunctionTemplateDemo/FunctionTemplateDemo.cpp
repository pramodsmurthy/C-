//============================================================================
// Name        : FunctionTemplateDemo.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Program to demo function templates
//============================================================================

#include <iostream>

using namespace std;

/* Below eg shows the code to perform addition by passing different arguments to add
 * function. This is sample code if function templates are not used.


int add (int x, int y) { return x + y; }
double add(double x, double y) { return x + y; }
double add(int x, double y) { return x + y; }
double add (double x, int y) { return x + y; }

int main()
{
	cout << add (2, 5) << endl;
	cout << add(2.5, 3.5) << endl;
	cout << add(2.5, 3) << endl;
	cout << add(2, 3.5) << endl;
	return 0;
}
*/
//-----------------------------------------------------------------------
/* As shown above we need 4 different function to perform addition of two different argument types
 * Using function templates we can replace above 4 functions with a single function template.
 */

template <typename T, typename T2>
T add(T var1, T2 var2)
{
	cout << var1 << " " << var2 << endl;
	return var1 + var2;
}

int main()
{
	cout << add <double, double> (2, 5.5) << endl;
	return 0;
}

// We can also pass class objects to the above add function and expect the class data' of two
// objects to get added. But for this we will have to overload the '+' operator for class objects.

