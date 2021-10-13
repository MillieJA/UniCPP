// Question 10
#include "StaticQueue.h"
#include <iostream>
#include <string>
using namespace std;

StaticQueue::StaticQueue(int s) {
    queueArray = new int[s];
    queueSize = s;
    front = -1;
    rear = -1;
    numItems = 0;
}

StaticQueue::StaticQueue(const StaticQueue& obj) {

    queueArray = new int[obj.queueSize];
    queueSize = obj.queueSize;
    front = obj.front;
    rear = obj.rear;
    numItems = obj.numItems;

    for (int count = 0; count < obj.queueSize; count++)
        queueArray[count] = obj.queueArray[count];
}

void StaticQueue::enqueue(int num) {
    if (isFull())
        cout << "The queue is full.\n";
    else
    {
        rear = (rear + 1) % queueSize;
        queueArray[rear] = num;
        numItems++;
    }
}

void StaticQueue::dequeue(int& num) {
    if (isEmpty())
        cout << "The queue is empty.\n";
    else
    {
        front = (front + 1) % queueSize;
        num = queueArray[front];
        numItems--;
    }
}

bool StaticQueue::isEmpty() const {
    bool status;

    if (numItems)
        status = false;
    else
        status = true;

    return status;
}

bool StaticQueue::isFull() const {
    bool status;

    if (numItems < queueSize)
        status = false;
    else
        status = true;

    return status;
}

void StaticQueue::clear() {
    front = queueSize - 1;
    rear = queueSize - 1;
    numItems = 0;
}

void StaticQueue::moveNthFront(int n) {
    StaticQueue temp(6);
    int i = 0;
    if (!isEmpty() && n > 0) {
        while (i < n - 1) {
            temp.front = front;
            i++;
            front = (front + 1) % 6;
        }
    }
    else if (n == 0) {
        cout << endl << "Element is already at the start of the queue." << endl;
    }
    else {
        cout << endl << "Element does not exist" << endl;
    }
}