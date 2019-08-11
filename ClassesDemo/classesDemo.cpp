//============================================================================
// Name        : classesDemo.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Program to demo the use of classes.
//============================================================================

#include <iostream>
#include "people.h"

using namespace std;

int main()
{
	PersonalData person("Pramod Krishnamurthy");
	person.setAge(30);
	cout << "Age of a person is " << person.getAge() << endl;
	cout << "Person name is " << person.getName() << endl;
	PersonalData person2;
	return 0;
}

