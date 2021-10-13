// Question 6
#include "ExternalExamMarks.h"
#include <iostream>
#include <string>
using namespace std;

// Mutators
void ExternalExamMarks::setExtExamMark1(int eem1) {
	extExamMark1 = eem1;
}
void ExternalExamMarks::setExtExamMark2(int eem2) {
	extExamMark2 = eem2;
}

int ExternalExamMarks::getExtAvg() {
	int average = (extExamMark1 + extExamMark2) / 2;
	return average;
}