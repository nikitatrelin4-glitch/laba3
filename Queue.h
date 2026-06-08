#ifndef QUEUE_H
#define QUEUE_H

#include <stack>

class PositiveTwoStacksQueue {
private:
    std::stack<int> stack_in;
    std::stack<int> stack_out;

    void shiftStacks();

public:
    PositiveTwoStacksQueue() = default;

    void enqueue(int x);
    int dequeue();
    int front();

    bool isEmpty();
};

#endif Queue
