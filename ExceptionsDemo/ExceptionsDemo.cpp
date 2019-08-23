//============================================================================
// Name        : ExceptionsDemo.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Program to demo the use of exceptions in C++
//============================================================================

#include <iostream>

using namespace std;

class divisionbyzero
{
public:
	void errormessage() { cout << "This is a division by zero exception " << endl; }
};

void throwexception()
{
	bool integererror = false;
	bool stringerror = false;
	bool primstringerror = true;

	if (integererror)
	{
		throw -1;
	}
	if (stringerror)
	{
		throw string("I can throw string exception like this");
	}
	if (primstringerror)
	{
		throw "I can throw primitive string exception like this";
	}
	//throw(20/0);

}

int main()
{
	try
	{
		//throwexception();
		int *ptr = new int [99999999999];
		cout << ptr << endl;
	}
	catch (exception& e)
	{
		cout << " Caught standard integer exception "<< e.what() << endl;
	}
	catch (string &e)
	{
		cout << "Caught string exception " << endl;
	}
	catch(char const *mesg)
	{
		cout << "This will catch primitive string exception "<< mesg << endl;
	}
	catch (divisionbyzero e)
	{

	}
}
