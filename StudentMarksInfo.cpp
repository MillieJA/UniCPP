// Question 6
#include "StudentMarksInfo.h"
#include <iostream>
#include <string>
using namespace std;

// Mutators
void StudentMarksInfo::setRollNumber(int rn) {
	rollNumber = rn;
}
void StudentMarksInfo::setName(string n) {
	name = n;
}
void StudentMarksInfo::setStream(string s) {
	stream = s;
}
string StudentMarksInfo::getInfo() {
	string strRollNumber = to_string(rollNumber);

	string strIntExamMark1 = to_string(intExamMark1);
	string strIntExamMark2 = to_string(intExamMark2);

	string strExtExamMark1 = to_string(extExamMark1);
	string strExtExamMark2 = to_string(extExamMark2);

	string info = "Student Roll Number: " + strRollNumber + "\nName: " + name + "\nStream: " + stream + "\n\nInternal Exams: \nExam 1: " + strIntExamMark1 + "\nExam 2: " + strIntExamMark2 + "\n\nExternal Exams: \nExam 1: " + strExtExamMark1 + "\nExam 2: " + strExtExamMark2;
	return info;
}