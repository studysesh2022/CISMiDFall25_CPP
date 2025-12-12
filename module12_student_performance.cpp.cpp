#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class StudentPerformance {
public:
    int hoursStudied;
    int previousScores;
    string extracurricular;
    int sleepHours;
    int papersPracticed;
    float performanceIndex;

    
    void display() const {
        cout << left
             << setw(15) << hoursStudied
             << setw(18) << previousScores
             << setw(22) << extracurricular
             << setw(12) << sleepHours
             << setw(25) << papersPracticed
             << setw(18) << performanceIndex
             << endl;
    }
};

vector<string> parseCSVLine(const string& line) {
    vector<string> fields;
    string field;
    stringstream ss(line);

    while (getline(ss, field, ',')) {
        fields.push_back(field);
    }

    return fields;
}

int main() {
    ifstream file("StudentPerformance.csv");

    if (!file.is_open()) {
        cout << "Error: Could not open StudentPerformance.csv" << endl;
        return 1;
    }

    string line;
    vector<StudentPerformance> students;

  
    getline(file, line);

    
    while (getline(file, line) && students.size() < 10) {
        vector<string> fields = parseCSVLine(line);

        if (fields.size() < 6) continue;

        StudentPerformance s;
        s.hoursStudied = stoi(fields[0]);
        s.previousScores = stoi(fields[1]);
        s.extracurricular = fields[2];
        s.sleepHours = stoi(fields[3]);
        s.papersPracticed = stoi(fields[4]);
        s.performanceIndex = stof(fields[5]);

        students.push_back(s);
    }

    file.close();

    
    cout << left
         << setw(15) << "HoursStudied"
         << setw(18) << "PreviousScores"
         << setw(22) << "Extracurricular"
         << setw(12) << "SleepHours"
         << setw(25) << "PapersPracticed"
         << setw(18) << "PerformanceIndex"
         << endl;

    cout << string(110, '-') << endl;

    // Display student records
    for (const auto& student : students) {
        student.display();
    }

    cout << "\nTotal records displayed: " << students.size() << endl;

    return 0;
}
