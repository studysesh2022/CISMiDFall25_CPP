// module6_item.cpp
// Module 6: Strings and Classes - Item inventory with file I/O

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Item class represents an inventory item with a name and quantity
class Item {
public:
    string name;
    int quantity;

    // Writes "name,quantity" into items.txt
    void saveToFile() {
        ofstream out("items.txt");   // open file for writing (overwrite)
        if (out.is_open()) {
            out << name << "," << quantity << endl;
            out.close();
            cout << "Item saved to file." << endl;
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    // Reads all lines from items.txt and displays them
    void loadFromFile() {
        ifstream in("items.txt");    // open file for reading
        if (in.is_open()) {
            string line;
            while (getline(in, line)) {
                cout << "File content: " << line << endl;
            }
            in.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }
};

int main() {
    // Create an Item object and assign values
    Item tool;
    tool.name = "Screwdriver";
    tool.quantity = 10;

    // Save the item, then load and display file contents
    tool.saveToFile();
    tool.loadFromFile();

    return 0;
}