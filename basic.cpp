#include <iostream>
#include "basic.h"
using namespace std;

// add() function implementation - all function declarations located in basic.h
int basic::add(float num1, float num2) {
    float num3;
    num3 = num1 + num2;
    cout << num3;
    return 0;
}

// subtract() function implementation
int basic::subtract(float num1, float num2) {
    float num3;
    num3 = num1 - num2;
    cout << num3;
    return 0;
}

// multiply() function implementation
int basic::multiply(float num1, float num2) {
    float num3;
    num3 = num1 * num2;
    cout << num3;
    return 0;
}

// divide() function implementation
int basic::divide(float num1, float num2) {
    float num3;
    num3 = num1 / num2;
    cout << num3;
    return 0;
}