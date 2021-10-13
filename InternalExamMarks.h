// Question 6
#ifndef INTERNALEXAMMARKS_H
#define INTERNALEXAMMARKS_H

#include <iostream>
using namespace std;

class InternalExamMarks;

class InternalExamMarks {
protected:
	int intExamMark1;
	int intExamMark2;
public:
	// Constructor
	InternalExamMarks(int iem1 = 0, int iem2 = 0) {
		intExamMark1 = iem1;
		intExamMark2 = iem2;
	}

	// Mutator functions
	void setIntExamMark1(int);
	void setIntExamMark2(int);

	// Accessor functions
	int getIntExamMark1() {
		return intExamMark1;
	}
	int getIntExamMark2() {
		return intExamMark2;
	}

	virtual int getIntAvg();
};
#endif
