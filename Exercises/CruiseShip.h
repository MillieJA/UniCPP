// Question 4
#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include "Ship.h"

#include <iostream>
using namespace std;

class CruiseShip : public Ship {
protected:
	int maxPassengers;
public:
	// Constructor
	CruiseShip(string n = "Ship1", int yb = 2000, int mp = 2000) : Ship() {
		name = n;
		yearBuilt = yb;
		maxPassengers = mp;
	}

	// Mutator functions
	void setMaxPassengers(int);

	// Accessor functions
	int getMaxPassengers() {
		return maxPassengers;
	}

	// Functions
	virtual string getInfo();
};
#endif