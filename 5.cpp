#include <iostream>
#include <string>
using namespace std;

// Define a structure for Book
struct Book {
    string name;
    int pages;
    double price;
};

int main() {
    int numBooks;

    // Get the number of books
    cout << "Enter the number of books: ";
    cin >> numBooks;

    // Create an array of struct variables
    Book books[numBooks];

    // Input details for each book
    for (int i = 0; i < numBooks; ++i) {
        cin.ignore(); // Clear input buffer
        cout << "Enter details for book " << i + 1 << ":" << endl;

        cout << "Book Name: ";
        getline(cin, books[i].name);

        cout << "Number of Pages: ";
        cin >> books[i].pages;

        cout << "Price: ";
        cin >> books[i].price;
    }

    // Display the details of each book
    cout << "\nBook Details:" << endl;
    for (int i = 0; i < numBooks; ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Name: " << books[i].name << endl;
        cout << "Pages: " << books[i].pages << endl;
        cout << "Price: $" << books[i].price << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
