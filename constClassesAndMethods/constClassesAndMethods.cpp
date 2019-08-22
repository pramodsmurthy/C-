//============================================================================
// Name        : constClassesAndMethods.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Program to demo the use of constant classes and methods
//============================================================================

#include "position.h"
#include <iostream>


using namespace std;

int main()
{
	Position dog(10, 15);
	dog.getPosition();
	dog.setPosition(20, 30);
	dog.getPosition();

	const Position house(200, 300);
	// Since house cannot move, we should not allow house object to call set position.
	// One way to do that is to make the house object constant. But making a object constant
	// will prevent all the functions from getting invoked from constant object. A constant
	// object can invoke only constant functions. So make get position constant.
	house.getPosition();
	return 0;
}
