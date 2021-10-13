// Question 5
#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iostream>
using namespace std;

class NumDays;

class NumDays {
protected:
	double hours;
public:
	// Constructor
	NumDays(double h = 8.0) {
		hours = h;
	}

	// Mutator functions
	void setHours(double);

	// Accessor functions
	double getHours() {
		return hours;
	}

	// Functions
	void getDays();

	// Overloading operators Postfix + Prefix
	NumDays operator + (const NumDays&);
	NumDays operator - (const NumDays&);
	NumDays operator ++ ();
	NumDays operator ++ (int);
	NumDays operator -- ();
	NumDays operator -- (int);
};
#endif