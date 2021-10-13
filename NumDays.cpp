// Question 5
#include "NumDays.h"
#include <iostream>
#include <string>
using namespace std;

// Mutators
void NumDays::setHours(double h) {
	hours = h;
}

// Print function
void NumDays::getDays() {
	double d = hours / 8.0;
	cout << "You have worked " << hours << " hours, which equals " << d << " days." << endl;
}

// Overloading operators + -
NumDays NumDays::operator  + (const NumDays& NumDays2)
{
	int tHours;
	tHours = hours + NumDays2.hours;
	return tHours;
}
// Overloading operators -
NumDays NumDays::operator - (const NumDays& NumDays2)
{
	int tHours;
	tHours = hours - NumDays2.hours;
	return tHours;
}

// Overloading operators Postfix and Prefix ++ --
NumDays NumDays::operator ++ () { // Prefix
	++hours;
	return *this;
}
NumDays NumDays::operator ++ (int) { // Postfix
	hours++;
	return hours;
}
NumDays NumDays::operator -- () { // Prefix
	--hours;
	return *this;
}
NumDays NumDays::operator -- (int) { // Postfix
	hours--;
	return hours;
}
