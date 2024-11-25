#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle() : length(0), width(0) {}

    // Member function to set dimensions
    void setDimensions(double len, double wid) {
        if (len > 0 && wid > 0) {
            length = len;
            width = wid;
        } else {
            cout << "Length and width must be positive values." << endl;
        }
    }

    // Member function to calculate area
    double calculateArea() const {
        return length * width;
    }

    // Member function to display dimensions and area
    void display() const {
        cout << "Rectangle dimensions: " << endl;
        cout << "Length: " << length << " Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    double len, wid;
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;

    rect.setDimensions(len, wid);

    cout << endl;
    rect.display();

    return 0;
}
