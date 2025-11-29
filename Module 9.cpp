#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;
};

int findItemByName(Item inventory[], int size, const string& searchName) {
    for (int i = 0; i < size; i++) {
        if (inventory[i].name == searchName) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 5;
    Item inventory[SIZE];

    // input items
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter name for item " << i + 1 << ": ";
        cin >> inventory[i].name;
        cout << "Enter quantity for " << inventory[i].name << ": ";
        cin >> inventory[i].quantity;
    }

    // display all items
    cout << "\nInventory List:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << inventory[i].name << " - Qty: " << inventory[i].quantity << endl;
    }

    // search
    string searchName;
    cout << "\nEnter item name to search: ";
    cin >> searchName;

    int index = findItemByName(inventory, SIZE, searchName);
    if (index != -1) {
        cout << "Found " << inventory[index].name << " with quantity "
             << inventory[index].quantity << endl;
    } else {
        cout << "Item not found.\n";
    }

    return 0;
}
