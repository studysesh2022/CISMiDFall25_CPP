#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Record {
public:
    string field1;
    string field2;
    string field3;
    string field4;
    string field5;

    void print() const {
        cout << field1 << " | " << field2 << " | "
             << field3 << " | " << field4 << " | "
             << field5 << endl;
    }
};

int main() {
    ifstream file("data.csv");   // put your Kaggle file name here
    if (!file.is_open()) {
        cout << "Could not open file.\n";
        return 1;
    }

    string line;
    int count = 0;

    // (optional) skip header
    getline(file, line);

    while (getline(file, line) && count < 10) { // load at least 10 rows
        stringstream ss(line);
        Record r;
        getline(ss, r.field1, ',');
        getline(ss, r.field2, ',');
        getline(ss, r.field3, ',');
        getline(ss, r.field4, ',');
        getline(ss, r.field5, ',');

        r.print();
        count++;
    }

    file.close();
    return 0;
}
