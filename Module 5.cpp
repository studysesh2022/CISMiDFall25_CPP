#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Add\n";
    cout << "2. View\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
}

void addItem() {
    cout << "Add item functionality here.\n";
}

void viewItems() {
    cout << "View items functionality here.\n";
}

int main() {
    int option;
    do {
        showMenu();
        cin >> option;

        if (option == 1) {
            addItem();
        } else if (option == 2) {
            viewItems();
        } else if (option == 3) {
            cout << "Exiting...\n";
        } else {
            cout << "Invalid option.\n";
        }
    } while (option != 3);

    return 0;
}
