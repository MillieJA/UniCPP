// Question 1
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

// Format the date as mm\dd\yyyy
string Date::getFormat1() {
	std::string m = std::to_string(month);
	std::string d = std::to_string(day);
	std::string y = std::to_string(year);
	std::string dformat1 = m + "/" + d + "/" + y;
	return dformat1;
}
// Format the date as month dd, yyyy
string Date::getFormat2() {
	string months[12];
	months[0] = "January";
	months[1] = "February";
	months[2] = "March";
	months[3] = "April";
	months[4] = "May";
	months[5] = "June";
	months[6] = "July";
	months[7] = "August";
	months[8] = "September";
	months[9] = "October";
	months[10] = "November";
	months[11] = "December";
	std::string d = std::to_string(day);
	std::string y = std::to_string(year);
	std::string dformat2 = months[month - 1] + " " + d + ", " + y;
	return dformat2;
}
// Format the date as dd month yyyy
string Date::getFormat3() {
	string months[12];
	months[0] = "January";
	months[1] = "February";
	months[2] = "March";
	months[3] = "April";
	months[4] = "May";
	months[5] = "June";
	months[6] = "July";
	months[7] = "August";
	months[8] = "September";
	months[9] = "October";
	months[10] = "November";
	months[11] = "December";
	std::string d = std::to_string(day);
	std::string y = std::to_string(year);
	std::string dformat3 = d + " " + months[month - 1] + " " + y;
	return dformat3;
}

// Question 2
// Overloading operators Postfix and Prefix ++ --
Date Date::operator ++ () { // Prefix
	++day;
	if (day > 31) {
		++month;
		if (month > 12) {
			++year;
			month = 1;
		}
		day = 1;
	}
	return *this;
}
Date Date::operator ++ (int) { // Postfix
	Date temp(month, day, year);
	day++;
	if (day > 31) {
		month++;
		if (month > 12) {
			year++;
			month = 1;
		}
		day = 1;
	}
	return temp;
}
Date Date::operator -- () { // Prefix
	--day;
	if (day < 1) {
		--month;
		if (month < 1) {
			--year;
			month = 12;
		}
		day = 31;
	}
	return *this;
}
Date Date::operator -- (int) { // Postfix
	Date temp(month, day, year);
	day--;
	if (day < 1) {
		month--;
		if (month < 1) {
			year--;
			month = 12;
		}
		day = 31;
	}
	return temp;
}

// Overloading operators -
Date Date::operator - (const Date& date2)
{
	Date temp;
	int days;
	temp.month = month - date2.month;
	temp.day = day - date2.day;
	temp.year = year - date2.year;
	days = temp.day + (temp.month * 12) + (temp.year * 365);
	if (days < 0) {
		days = (days * -1);
	}
	return days;
}

// Stream cin/cout insertion operator with date validation
ostream& operator << (ostream& ostrm, const Date& obj)
{
	string months[12];
	months[0] = "January";
	months[1] = "February";
	months[2] = "March";
	months[3] = "April";
	months[4] = "May";
	months[5] = "June";
	months[6] = "July";
	months[7] = "August";
	months[8] = "September";
	months[9] = "October";
	months[10] = "November";
	months[11] = "December";
	ostrm << months[obj.month - 1] << " " << obj.day << ", " << obj.year;
	return ostrm;
}
istream& operator>>(istream& istrm, Date& obj)
{
	cout << "Enter the month number: ";
	istrm >> obj.month;
	while (obj.month < 1 || obj.month > 12) {
		cout << "Enter a valid month" << endl;
		istrm >> obj.month;
	}
	cout << "Enter the day number: ";
	istrm >> obj.day;
	while (obj.day < 1 || obj.day > 31) {
		cout << "Enter a valid day" << endl;
		istrm >> obj.day;
	}
	cout << "Enter the year: ";
	istrm >> obj.year;
	return istrm;
}

// Question 3
void Date::setMonth(int  m) {
	if (m > 0 && m < 13)
		month = m;
	else
		throw InvalidMonth();
}
void Date::setDay(int  d) {
	if (d > 0 && d < 32)
		day = d;
	else
		throw InvalidDay();
}
void Date::setYear(int  y) {
	year = y;
}