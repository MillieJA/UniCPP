// Question 4
#ifndef SHIP_H
#define SHIP_H

#include <iostream>
using namespace std;

class Ship;

class Ship {
protected:
	std::string name;
	int yearBuilt;
public:
	// Constructor
	Ship(string n = "Ship1", int yb = 2000) {
		name = n;
		yearBuilt = yb;
	}

	// Mutator functions
	void setName(string);
	void setYearBuilt(int);

	// Accessor functions
	string getName() {
		return name;
	}
	int getYearBuilt() {
		return yearBuilt;
	}

	// Functions
	virtual string getInfo();
};
#endif