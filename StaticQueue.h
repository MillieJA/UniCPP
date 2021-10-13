// Question 10
#ifndef STATICQUEUE_H
#define STATICQUEUE_H

class StaticQueue
{
private:
    int* queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;
public:
    // Constructor
    StaticQueue(int);

    // Copy constructor
    StaticQueue(const StaticQueue&);

    // Queue operations
    void enqueue(int);
    void dequeue(int&);
    bool isEmpty() const;
    bool isFull() const;
    void clear();
    void moveNthFront(int);
};
#endif