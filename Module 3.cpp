#include <iostream>
#include <string>
using namespace std;

int main() {
    string itemName;
    int quantity;
    float cost;

    cout << "Enter item name: ";
    cin >> itemName;      // if you want spaces, use getline instead
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter cost: ";
    cin >> cost;

    float total = quantity * cost;

    cout << "Total cost for " << itemName << ": $" << total << endl;
    return 0;
}