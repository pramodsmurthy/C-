#include <iostream>
#include "people.h"

using namespace std;

PersonalData::PersonalData()
{
	this->p = new int[10];
	cout << "Allocating memory here "<<endl;
}

PersonalData::PersonalData(string fullname)
{
	this->fullname = fullname;
}

void PersonalData::setAge(short age)
{
	if (age < 0)
	{
		cout << "Age cannot be negative, setting age to 0" << endl;
		this->age = age;
	}
	else
	{
		this->age = age;
	}
}

short PersonalData::getAge()
{
	return this->age;
}

string PersonalData::getName()
{
	return this->fullname;
}

PersonalData::~PersonalData()
{
	delete []this->p;
	cout << "Freeing memory here " << endl;
}
