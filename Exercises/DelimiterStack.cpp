// Question 9
#include "DelimiterStack.h"
#include <iostream>
#include <string>
using namespace std;

// Add a new element to the top of the stack
void DelimiterStack::push(string val) {
    StackNode* newNode;

    newNode = new StackNode;
    newNode->value = val;

    if (isEmpty()) {
        top = newNode;
        newNode->next = NULL;
    }
    else {
        newNode->next = top;
        top = newNode;
    }
}

// Remove the top element from the stack
void DelimiterStack::pop(string& val) {
    StackNode* temp;

    if (isEmpty()) {
        cout << "The stack is empty.\n";
    }
    else {
        val = top->value;
        temp = top->next;
        delete top;
        top = temp;
    }
}

// Check whether the stack is empty or not
bool DelimiterStack::isEmpty() {
    bool status;

    if (!top)
        status = true;
    else
        status = false;

    return status;
}