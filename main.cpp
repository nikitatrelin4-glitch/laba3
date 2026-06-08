#include <iostream>
#include "Queue.h"

int main() {
    setlocale(LC_ALL, "Russian");

    PositiveTwoStacksQueue q;
    std::cout << "--- Проверка работы очереди из двух стеков ---\n" << std::endl;

    try {
        std::cout << "Добавляем числа 10, 20, 30..." << std::endl;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);

        std::cout << "Первый в очереди (front): " << q.front() << std::endl;

        std::cout << "Удаляем элемент (dequeue): " << q.dequeue() << std::endl; 
        std::cout << "Следующий в очереди (front): " << q.front() << std::endl; 

        std::cout << "\nПопытка добавить некорректное число (-5):" << std::endl;
        q.enqueue(-5);

    }
    catch (const std::exception& e) {
        std::cerr << "[Исключение] " << e.what() << std::endl;
    }

    return 0;
}
