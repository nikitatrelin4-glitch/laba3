#include "Queue.h"
#include <stdexcept>

void PositiveTwoStacksQueue::shiftStacks() {
    if (stack_out.empty()) {
        while (!stack_in.empty()) {
            stack_out.push(stack_in.top());
            stack_in.pop();
        }
    }
}

void PositiveTwoStacksQueue::enqueue(int x) {
    if (x <= 0) {
        throw std::invalid_argument("Ошибка: Разрешены только положительные числа (x > 0)!");
    }
    stack_in.push(x);
}

int PositiveTwoStacksQueue::dequeue() {
    if (isEmpty()) {
        throw std::underflow_error("Ошибка: Очередь пуста!");
    }
    shiftStacks();
    int topVal = stack_out.top();
    stack_out.pop();
    return topVal;
}

int PositiveTwoStacksQueue::front() {
    if (isEmpty()) {
        throw std::underflow_error("Ошибка: Очередь пуста!");
    }
    shiftStacks();
    return stack_out.top();
}

bool PositiveTwoStacksQueue::isEmpty() {
    return stack_in.empty() && stack_out.empty();
}
