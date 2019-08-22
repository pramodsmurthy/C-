#include <iostream>
#include "position.h"

using namespace std;

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}

Position::~Position()
{

}

void Position::getPosition() const
{
	cout << x << " " << y << endl;
}

void Position::setPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}
