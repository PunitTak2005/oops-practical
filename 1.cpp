#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize attributes
    Rectangle() : length(0), width(0) {}

    // Function to set dimensions
    void setDimensions(double len, double wid) {
        if (len > 0 && wid > 0) {
            length = len;
            width = wid;
        } else {
            cout << "Length and width must be positive values.\n";
        }
    }

    // Function to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }

    // Function to display dimensions and area
    void display() const {
        cout << "Rectangle Dimensions:" << endl;
        cout << "Length: " << length << " units" << endl;
        cout << "Width: " << width << " units" << endl;
        cout << "Area: " << calculateArea() << " square units" << endl;
    }
};

int main() {
    Rectangle rect;
    double len, wid;

    // Input dimensions from the user
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;

    // Set dimensions and display the details
    rect.setDimensions(len, wid);
    rect.display();

    return 0;
}
