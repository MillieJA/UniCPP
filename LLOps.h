// Question 11
#ifndef LLOPS_H
#define LLOPS_H
#include <iostream>
using namespace std;

class LLOps {
private:
    struct ListNode {
        std::string value;
        struct ListNode* next;
    };
    ListNode* head;
public:
    // Constructor
    LLOps() {
        head = NULL;
    }

    // Functions
    void appendNode(string);
    void insertNode(string);
    // void deleteNode(string);
    void displayList() const;

    // void downsize(const LLOps& list);
    void merge(const LLOps& list1, const LLOps& list2);

};
#endif