// Question 4
#include "CargoShip.h"
#include <iostream>
#include <string>
using namespace std;

// Mutators
void CargoShip::setCargoCapacity(int cc) {
	cargoCapacity = cc;
}

// Print function
string CargoShip::getInfo() {
	string strcc = to_string(cargoCapacity);
	string info = "Ship Name: " + name + "\nCargo Capacity (in tonnes): " + strcc + "\n\n";
	return info;
}