// Question 4
#include "CruiseShip.h"
#include <iostream>
#include <string>
using namespace std;

// Mutators
void CruiseShip::setMaxPassengers(int mp) {
	maxPassengers = mp;
}

// Print function
string CruiseShip::getInfo() {
	string strmp = to_string(maxPassengers);
	string info = "Ship Name: " + name + "\nMaximum  Passengers: " + strmp + "\n\n";
	return info;
}