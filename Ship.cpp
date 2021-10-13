// Question 4
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

// Mutators
void Ship::setName(string n) {
	name = n;
}
void Ship::setYearBuilt(int yb) {
	yearBuilt = yb;
}

// Print function
string Ship::getInfo() {
	string stryb = to_string(yearBuilt);
	string info = "Ship Name: " + name + "\nYear Built : " + stryb + "\n\n";
	return info;
}