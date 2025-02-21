#include <iostream>
#include <cassert>
using namespace std;

// Функція, яку ми тестуємо
int add(int a, int b) {
    return a + b;
}

// Тестова функція
void test_add() {
    assert(add(2, 3) == 5);  // Перевіряємо, чи 2 + 3 = 5
    assert(add(-1, 1) == 0); // Перевіряємо, чи -1 + 1 = 0
    assert(add(0, 0) == 0);  // Перевіряємо, чи 0 + 0 = 0
    cout << "All tests passed!" << endl;
}

int main() {
    test_add(); // Запускаємо тести 
    return 0;
}
