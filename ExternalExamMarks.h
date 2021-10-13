// Question 6
#ifndef EXTERNALEXAMMARKS_H
#define EXTERNALEXAMMARKS_H

#include <iostream>
using namespace std;

class ExternalExamMarks;

class ExternalExamMarks {
protected:
	int extExamMark1;
	int extExamMark2;
public:
	// Constructor
	ExternalExamMarks(int eem1 = 0, int eem2 = 0) {
		extExamMark1 = eem1;
		extExamMark2 = eem2;
	}

	// Mutator functions
	void setExtExamMark1(int);
	void setExtExamMark2(int);

	// Accessor functions
	int getExtExamMark1() {
		return extExamMark1;
	}
	int getExtExamMark2() {
		return extExamMark2;
	}

	virtual int getExtAvg();
};
#endif