#include <iostream>
#include "basic.h"
using namespace std;

int main() {
    // Variable definitions
    int operation;
    // Main code
    cout << "             Calculator\n"
            "--------------------------------------" << endl;
    cout << "   1) Add\n"
            "   2) Subtract\n"
            "   3) Multiply\n"
            "   4) Divide" << endl;
    cin >> operation;
    switch (operation) {
        case 1:
            basic::add(3, 6);
            break;
        case 2:
            basic::subtract(6, 3);
            break;
        case 3:
            basic::multiply(3, 6);
            break;
        case 4:
            basic::divide(6, 3);
            break;
        default:
            cout << "Please enter a valid option and try again.";
            return 0;
    }
}
