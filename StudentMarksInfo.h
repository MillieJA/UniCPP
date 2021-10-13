// Question 4
#ifndef STUDENTMARKSINFO_H
#define STUDENTMARKSINFO_H
#include "InternalExamMarks.h"
#include "ExternalExamMarks.h"

#include <iostream>
using namespace std;

class StudentMarksInfo : public InternalExamMarks, public ExternalExamMarks {
protected:
	int rollNumber;
	std::string name;
	std::string stream;

public:
	// Constructor
	StudentMarksInfo(int rn, string n, string s, int iem1, int iem2, int eem1, int eem2) : InternalExamMarks(), ExternalExamMarks() {
		rollNumber = rn;
		name = n;
		stream = s;
		intExamMark1 = iem1;
		intExamMark2 = iem2;
		extExamMark1 = eem1;
		extExamMark2 = eem2;
	}

	// Mutator functions
	void setRollNumber(int);
	void setName(string);
	void setStream(string);

	// Accessor functions
	int getRollNumber() {
		return rollNumber;
	}
	string getName() {
		return name;
	}
	string getStream() {
		return stream;
	}

	// Display info function
	virtual string getInfo();
};
#endif