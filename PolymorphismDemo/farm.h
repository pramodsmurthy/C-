#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED

#include <iostream>
using namespace std;

class Animal
{
protected:
	string voice;
public:
	Animal(string="some voice");
	~Animal();
	string getVoice() { return voice; }
};

class Dog : public Animal
{
public:
	Dog(string);
	~Dog();
	string getVoice() { return voice; }
};

class Cat : public Animal
{
public:
	Cat(string);
	~Cat();
	string getVoice(){ return voice; }
};

class Cow: public Animal
{
public:
	Cow(string);
	~Cow();
	string getVoice(){ return voice; }
};



#endif
