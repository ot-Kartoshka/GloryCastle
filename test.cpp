#include <iostream>
#include <cassert>
#include "LAB.h"

using namespace std;

void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, -1) == -2);
    cout << "test_add PASSED" << endl;
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(10, 20) == -10);
    cout << "test_subtract PASSED" << endl;
}

void test_multiply() {
    assert(multiply(2, 3) == 6);
    assert(multiply(-4, -5) == 20);
    cout << "test_multiply PASSED" << endl;
}

int main() {
    test_add();
    test_subtract();
    test_multiply();
    cout << "All tests PASSED!" << endl;
    return 0;
}
