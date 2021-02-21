#include <iostream>
#include "basic.h"
#include "advanced.h"
using namespace std;

int main() {
    // Variable definitions
    int operation;
    float input1;
    float input2;
    // Main code
    cout << "             Calculator\n"
            "--------------------------------------" << endl;
    cout << "   1) Add\n"
            "   2) Subtract\n"
            "   3) Multiply\n"
            "   4) Divide\n"
            "   5) Exponential\n"
            "   6) Square root" << endl;
    cin >> operation;
    // The operation selector
    switch (operation) {
        case 1:
            cin >> input1;
            cout << "+\n";
            cin >> input2;
            cout << "= ";
            basic::add(input1, input2);
            break;
        case 2:
            cin >> input1;
            cout << "-\n";
            cin >> input2;
            cout << "= ";
            basic::subtract(input1, input2);
            break;
        case 3:
            cin >> input1;
            cout << "x\n"; // Putting the unicode multiply symbol results in a display error
            cin >> input2;
            cout << "= ";
            basic::multiply(input1, input2);
            break;
        case 4:
            cin >> input1;
            cout << "/\n";
            cin >> input2;
            cout << "= ";
            basic::divide(input1, input2);
            break;
        case 5:
            cin >> input1;
            cout << "+\n";
            cin >> input2;
            cout << "= ";
            advanced::expo(input1, input2);
            break;
        case 6:
            cin >> input1;
            cout << "= ";
            advanced::sqroot(input1);
            break;
        default:
            // If the user provides a null or invalid value, the application executes the following code
            cout << "Please enter a valid option and try again.";
            return 0;
    }
}
