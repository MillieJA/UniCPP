// Question 8
#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;

void LinkedList::appendNode(string val) {
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

void LinkedList::insertNode(string val) {
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

///*-  NOT WORKING
//void StringList::deleteNode(string val) {
//    ListNode* nodePtr;
//    ListNode* previousNode;
//
//    if (!head) {
//        return;
//    }
//
//    if (head->value == val) {
//        nodePtr = head->next;
//        delete head;
//        head = nodePtr;
//    }
//    else {
//        nodePtr = head;
//
//        while (nodePtr != NULL) {
//            previousNode = nodePtr;
//            nodePtr = nodePtr->next;
//            if (nodePtr->value == val) {
//                previousNode->next = nodePtr->next;
//                delete nodePtr;
//            }
//        }
//    }
//}
//*/

void LinkedList::displayList() const {
    ListNode* nodePtr;

    nodePtr = head;

    while (nodePtr) {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
}

LinkedList  LinkedList::operator [] (int pos) {
    ListNode* nodePtr = new ListNode;
    int length = 0;

    nodePtr = head;

    while (nodePtr != NULL)
    {
        ++length;
        nodePtr = nodePtr->next;
    }

    if (pos >= 0 && pos < length) {

        ListNode* nodePtr = new ListNode;
        ListNode* previousNode = new ListNode;

        nodePtr = head;

        int count = 0;
        while (nodePtr != NULL)
        {
            if (count == pos)
                cout << nodePtr->value;
            count++;
            nodePtr = nodePtr->next;
        }
    }
    else
        throw InvalidSubscript();
}