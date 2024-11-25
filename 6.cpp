#include <iostream>
using namespace std;

// Inline function for multiplication
inline double multiply(double a, double b) {
    return a * b;
}

// Inline function for division
inline double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
        return 0; // Returning 0 in case of division by zero
    }
}

int main() {
    double num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform multiplication and division
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;

    cout << "Division of " << num1 << " by " << num2 << " is: " << divide(num1, num2) << endl;

    return 0;
}
