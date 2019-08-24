#include <iostream>
#include "farm.h"

using namespace std;

Animal::Animal(string voice)
{
	this->voice = "some voice";
	cout << "Animal constructor is invoked " << endl;
}

Animal::~Animal()
{
	cout << "Animal destructor is invoked " << endl;
}

Dog::Dog()
{
	this->voice = "Bow bow bow";
	cout << "Dog constructor is invoked " << endl;
}

Dog::~Dog()
{
	cout << "Dog destructor is invoked " << endl;
}

Cow::Cow()
{
	this->voice = "Haw haw haw";
	cout << "Cow constructor is invoked " << endl;
}

Cow::~Cow()
{
	cout << "Cow destructor is invoked " << endl;
}

Cat::Cat()
{
	this->voice = "Meow meow";
	cout << "Cat constructor is invoked " << endl;
}

Cat::~Cat()
{
	cout << "Cat destructor is invoked " << endl;
}
