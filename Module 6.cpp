#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    void saveToFile() {
        ofstream out("items.txt", ios::app); // append so we don’t overwrite
        if (out.is_open()) {
            out << name << "," << quantity << endl;
            out.close();
            cout << "Item saved to file.\n";
        } else {
            cout << "Unable to open file for writing.\n";
        }
    }

    void loadFromFile() {
        ifstream in("items.txt");
        if (in.is_open()) {
            string line;
            cout << "File content:\n";
            while (getline(in, line)) {
                cout << line << endl;
            }
            in.close();
        } else {
            cout << "Unable to open file for reading.\n";
        }
    }
};

int main() {
    Item tool;
    tool.name = "Screwdriver";
    tool.quantity = 10;

    tool.saveToFile();
    tool.loadFromFile();

    return 0;
}