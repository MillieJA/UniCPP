// Question 6
#include "InternalExamMarks.h"
#include <iostream>
#include <string>
using namespace std;

// Mutators
void InternalExamMarks::setIntExamMark1(int iem1) {
	intExamMark1 = iem1;
}
void InternalExamMarks::setIntExamMark2(int iem2) {
	intExamMark2 = iem2;
}

int InternalExamMarks::getIntAvg() {
	int average = (intExamMark1 + intExamMark2) / 2;
	return average;
}