//============================================================================
// Name        : vectors.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Program to demo vectors in C++.
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Person
{
public:
	int id;
	string name;
public:
	Person(int id, string name) : id(id), name(name) { }
	void print() {
		cout << id << ": " << name << endl;
	}
};

int main()
{
	vector<int> nums;
	cout << "Size: " << nums.size() << endl;
	cout << "Capacity: " << nums.capacity() << endl;
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(50);
	nums.push_back(40);

	// Vectors can be iterated either by index or by iterator, below is an example of using iterator.
	for ( vector<int> :: iterator it = nums.begin(); it != nums.end(); it++ ) {
		cout << *it << endl; // * operator is overloaded for iterator
	}

	cout << endl << endl;

	// Vectors accessed by index
	for (int i = nums.size()-1; i >= 0; i--) {
		cout << nums[i] << endl;
	}

	cout << endl << endl;
	cout << "Size: " << nums.size() << endl;
	cout << "Capacity: " << nums.capacity() << endl;


	cout << "Sorting vector of ints" << endl;
	sort(nums.begin(), nums.end());

	for (int i = nums.size()-1; i >= 0; i--) {
		cout << nums[i] << endl;
	}

	nums.resize(100);
	nums.reserve(120);
	cout << endl << endl;
	cout << "Size: " << nums.size() << endl;
	cout << "Capacity: " << nums.capacity() << endl;
	nums.clear();
	cout << "Size: " << nums.size() << endl;

	vector<Person> persons;
	persons.push_back(Person(30, "Pramod"));
	persons.push_back(Person(25, "Vasudha"));
	persons.push_back(Person(32, "Divya"));

	for ( int i = 0; i <= persons.size(); i++ ) {
		cout << persons[i].print();
	}

/*	for( vector<Person> :: iterator it = persons.begin(); it != persons.end(); it++) {
		cout << it->id << ": " << it->name << endl;
		cout << it->print() << endl;
	}*/

	return 0;
}
