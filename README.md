# Очередь через два стека (Two Stacks Queue)

---

## Структура проекта

### PositiveTwoStacksQueue — очередь из двух стеков

```cpp
class PositiveTwoStacksQueue {
private:
    std::stack<int> stack_in;   // стек для добавления (enqueue)
    std::stack<int> stack_out;  // стек для удаления/просмотра (dequeue/front)
};
```

---

## Функции очереди

| Функция | Описание |
| :--- | :--- |
| `enqueue(int x)` | Добавляет элемент в конец очереди, принимает только положительные числа ($x > 0$). |
| `dequeue()` | Удаляет и возвращает первый элемент из начала очереди. |
| `front()` | Возвращает первый элемент из начала очереди без удаления. |
| `isEmpty()` | Проверяет, пуста ли очередь (возвращает `true` / `false`). |

---

## Быстрый старт

```cpp
#include <iostream>
#include "Queue.h"

int main() {
    setlocale(LC_ALL, "Russian");
    
    PositiveTwoStacksQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    std::cout << "Первый в очереди (front): " << q.front() << std::endl;
    
    std::cout << "Удаляем элемент (dequeue): " << q.dequeue() << std::endl;
    
    std::cout << "Следующий в очереди (front): " << q.front() << std::endl;
    
    try {
        std::cout << "\nПопытка добавить некорректное число (-5):" << std::endl;
        q.enqueue(-5);
    } catch (const std::exception& e) {
        std::cout << "[Исключение] " << e.what() << std::endl;
    }
    
    return 0;
}
```

**Вывод:**

```text
--- Проверка работы очереди из двух стеков ---

Добавляем числа 10, 20, 30...
Первый в очереди (front): 10
Удаляем элемент (dequeue): 10
Следующий в очереди (front): 20

Попытка добавить некорректное число (-5):
[Исключение] Ошибка: Разрешены только положительные числа (x > 0)!
```
