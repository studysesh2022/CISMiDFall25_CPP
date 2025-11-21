// module11_product.cpp
// Module 11: Advanced Classes - Constructors & Destructors

#include <iostream>
#include <string>

using namespace std;

class Product {
    int id;
    string name;
    float price;

public:
    // Constructor initializes member variables
    Product(int i, const string& n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called" << endl;
    }

    // Destructor prints a message when object is destroyed
    ~Product() {
        cout << "Destructor called" << endl;
    }

    // Prints product information
    void printDetails() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Price: $" << price << endl;
    }
};

int main() {
    // Create a Product object with sample values
    Product p(101, "Notebook", 4.99f);

    // Display product information
    p.printDetails();

    // When main ends, destructor is automatically called
    return 0;
}
