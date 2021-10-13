// Question 8
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

class LinkedList;

class LinkedList {
private:
	struct ListNode {
		std::string value;
		struct ListNode* next;
	};
	ListNode* head;
public:
	// Constructor
	LinkedList() {
		head = NULL;
	}

	// Functions
	void appendNode(string);
	void insertNode(string);
	// void deleteNode(string);
	void displayList() const;

	// Overloading operators
	LinkedList operator [] (int);

	// Exception classes
	class InvalidSubscript {
	};
};
#endif