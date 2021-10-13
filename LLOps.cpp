// Question 11
#include "LLOps.h"
#include <iostream>
#include <string>
using namespace std;

void LLOps::appendNode(string val) {
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

void LLOps::insertNode(string val) {
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
void LLOps::deleteNode(string val) {
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

void LLOps::displayList() const {
    ListNode* nodePtr;

    nodePtr = head;

    while (nodePtr) {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
}

// Question functions
// NOT WORKING
//void LLOps::downsize(const LLOps& list) {
//    ListNode* nodePtr;
//    ListNode* nextNode;
//    ListNode* nextNode2;
//
//    nodePtr = list.head;
//
//    while (nodePtr->next != NULL) {
//        nextNode = nodePtr->next->next;
//        nextNode2 = nextNode->next;
//        
//        nodePtr->next = nextNode;
//        nextNode->next = nextNode2;
//    }
//}

void LLOps::merge(const LLOps& list1, const LLOps& list2) {
    ListNode* nodePtr1;
    ListNode* nodePtr2;
    ListNode* nextNode1;
    ListNode* nextNode2;

    nodePtr1 = list1.head;
    nodePtr2 = list2.head;

    while (nodePtr1->next != NULL) {
        nextNode1 = nodePtr1->next;
        nextNode2 = nodePtr2->next;

        nodePtr2->next = nextNode1;
        nodePtr1->next = nodePtr2;

        nodePtr1 = nextNode1;
        nodePtr2 = nextNode2;
    }

    // Losing last letter, runs loop once more to avoid this
    nextNode1 = nodePtr1->next;
    nextNode2 = nodePtr2->next;

    nodePtr2->next = nextNode1;
    nodePtr1->next = nodePtr2;

    nodePtr1 = nextNode1;
    nodePtr2 = nextNode2;
}