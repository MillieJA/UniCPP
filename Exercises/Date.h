// Question 1
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date;

// Stream cin/cout insertion operator (Question 2)
ostream& operator << (ostream&, const Date&);
istream& operator >> (istream&, Date&);

class Date {
private:
	int month;
	int day;
	int year;
public:
	// Constructor
	Date(int m = 01, int d = 01, int y = 2000) {
		month = m;
		day = d;
		year = y;
	}

	// Formatting functions
	std::string getFormat1();
	std::string getFormat2();
	std::string getFormat3();

	//  Question  2
	// Overloading operators Postfix + Prefix
	Date operator ++ ();
	Date operator ++ (int);
	Date operator -- ();
	Date operator -- (int);
	Date operator - (const Date&);

	// Stream cin/cout insertion operator
	friend ostream& operator << (ostream&, const Date&);
	friend istream& operator >> (istream&, Date&);

	// Question 3
	// Mutator functions
	void setMonth(int);
	void setDay(int);
	void setYear(int);

	// Exception classes
	class InvalidMonth {
	};
	class InvalidDay {
	};
};
#endif