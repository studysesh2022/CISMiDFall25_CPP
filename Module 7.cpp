#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

int binarySearch(Item* arr, int size, int targetId) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid].id == targetId) {
            return mid;
        } else if (arr[mid].id < targetId) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size = 5; // you can make this 100 for the assignment
    Item* inventory = new Item[size];

    // sorted by id for binary search
    inventory[0] = {"Hammer",   101};
    inventory[1] = {"Pliers",   102};
    inventory[2] = {"Screwdriver", 103};
    inventory[3] = {"Wrench",   104};
    inventory[4] = {"Drill",    105};

    int searchId;
    cout << "Enter ID to search for: ";
    cin >> searchId;

    int index = binarySearch(inventory, size, searchId);

    if (index != -1) {
        cout << "Found item: " << inventory[index].name
             << " (ID: " << inventory[index].id << ")\n";
    } else {
        cout << "Item with ID " << searchId << " not found.\n";
    }

    delete[] inventory;
    return 0;
}