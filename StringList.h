// Question 7
#ifndef STRINGLIST_H
#define STRINGLIST_H
#include <iostream>
using namespace std;

class StringList {
private:
    struct ListNode {
        std::string value;
        struct ListNode* next;
    };
    ListNode* head;
public:
    // Constructor
    StringList() {
        head = NULL;
    }

    // Functions
    void appendNode(string);
    void insertNode(string);
    // void deleteNode(string);
    void displayList() const;

    void removeByPosition(int pos);
    void addAll(const StringList& otherList);
    // void removeAll(const StringList &otherList);
    // void retainAll(const StringList& otherList);
};
#endif