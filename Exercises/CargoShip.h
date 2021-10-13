// Question 4
#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "Ship.h"

#include <iostream>
using namespace std;

class CargoShip : public Ship {
protected:
	int cargoCapacity;
public:
	// Constructor
	CargoShip(string n = "Ship1", int yb = 2000, int c = 2000) : Ship() {
		name = n;
		yearBuilt = yb;
		cargoCapacity = c;
	}

	// Mutator functions
	void setCargoCapacity(int);

	// Accessor functions
	int getCargoCapacity() {
		return cargoCapacity;
	}

	// Functions
	virtual string getInfo();
};
#endif