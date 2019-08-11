#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

#include <iostream>
using namespace std;

class PersonalData
{
private:
	short age;
	string fullname;
	int *p;
public:
	// Default constructor that allocates memory for variable p
	PersonalData();
	// This constructor sets the name of the person.
	PersonalData(string);
	// This function sets the age to a given value.  By default, it will be set to 0.
	void setAge(short);
	// This function returns the age of the person
	short getAge();
	// This function returns the name of the person
	string getName();
	// Destructor to relieve the allocated memory
	~PersonalData();
};

#endif
