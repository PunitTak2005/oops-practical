#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Parameterized Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Member function to display dimensions and area
    void display() {
        cout << "Rectangle Dimensions:" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    // Create an object using parameterized constructor
    Rectangle rect(10.5, 7.2);

    // Display the rectangle's details
    rect.display();

    return 0;
}
