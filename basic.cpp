#include <iostream>
#include "basic.h"
using namespace std;

// add() function implementation - all function declarations located in basic.h
int basic::add(int num1, int num2) {
    int num3;
    num3 = num1 + num2;
    cout << num3;
    return 0;
}

// subtract() function implementation
int basic::subtract(int num1, int num2) {
    int num3;
    num3 = num1 - num2;
    cout << num3;
    return 0;
}

// multiply() function implementation
int basic::multiply(int num1, int num2) {
    int num3;
    num3 = num1 * num2;
    cout << num3;
    return 0;
}

// divide() function implementation
int basic::divide(int num1, int num2) {
    int num3;
    num3 = num1 / num2;
    cout << num3;
    return 0;
}