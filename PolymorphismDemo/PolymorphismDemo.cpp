//============================================================================
// Name        : Polymorphism.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Program to demo the use of Polymorphism/Virtual functions feature of C++
//============================================================================

#include <iostream>
#include "farm.h"

using namespace std;

int main()
{
	Dog dog();
	Cat cat();
	Cow cow();
	Animal animal;
	cout << animal.getVoice() << endl;
	cout << dog.getVoice() << endl;
	cout << cat.getVoice() << endl;
	cout << cow.getVoice() << endl;
	return 0;
}
