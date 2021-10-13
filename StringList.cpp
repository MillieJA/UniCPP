// Question 7
#include "StringList.h"
#include <iostream>
#include <string>
using namespace std;

void StringList::appendNode(string val) {
    ListNode* newNode;
    ListNode* nodePtr;

    newNode = new ListNode;
    newNode->value = val;
    newNode->next = NULL;
    if (!head) {
        head = newNode;
    }
    else {
        nodePtr = head;

        while (nodePtr->next)
            nodePtr = nodePtr->next;

        nodePtr->next = newNode;
    }
}

void StringList::insertNode(string val) {
    ListNode* newNode;
    ListNode* nodePtr;
    ListNode* previousNode = NULL;

    newNode = new ListNode;
    newNode->value = val;
    if (!head) {
        head = newNode;
        newNode->next = NULL;
    }
    else {
        nodePtr = head;

        previousNode = NULL;

        while (nodePtr != NULL && nodePtr->value < val) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if (previousNode == NULL) {
            head = newNode;
            newNode->next = nodePtr;
        }
        else {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

/*-  NOT WORKING
void StringList::deleteNode(string val) {
    ListNode* nodePtr;
    ListNode* previousNode;

    if (!head) {
        return;
    }

    if (head->value == val) {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else {
        nodePtr = head;

        while (nodePtr != NULL) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            if (nodePtr->value == val) {
                previousNode->next = nodePtr->next;
                delete nodePtr;
            }
        }
    }
}
*/

void StringList::displayList() const {
    ListNode* nodePtr;

    nodePtr = head;

    while (nodePtr) {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
}

// Question functions
void StringList::removeByPosition(int pos) {
    ListNode* nodePtr = new ListNode;
    ListNode* previousNode = new ListNode;

    nodePtr = head;
    for (int i = 1; i < pos; i++)
    {
        previousNode = nodePtr;
        nodePtr = nodePtr->next;
    }
    previousNode->next = nodePtr->next;
}

// Add all elements of one list to another - NOT WORKING AND NO DUPLICATE CHECKING
void StringList::addAll(const StringList& otherList) {

    ListNode* newNode;
    ListNode* nodePtr;
    ListNode* previousNode = NULL;

    newNode = new ListNode;
    newNode = otherList.head;
    if (!head) {
        head = newNode;
        newNode->next = NULL;
    }
    else {
        nodePtr = head;

        previousNode = NULL;

        while (nodePtr != NULL) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if (nodePtr == NULL) {
            nodePtr = newNode;
        }
    }
}