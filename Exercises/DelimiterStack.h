// Question 9
#ifndef DELIMITERSTACK_H
#define DELIMITERSTACK_H

#include <iostream>
using namespace std;

class DelimiterStack;

class DelimiterStack {
private:
	struct StackNode {
		string value;
		StackNode* next;
	};

	StackNode* top;
public:
	// Constructor
	DelimiterStack() {
		top = NULL;
	}

	// Functions
	void push(string);
	void pop(string&);
	bool isEmpty();
};
#endif