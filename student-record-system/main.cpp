#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    vector<Student> students;
    int choice;

    cout << "Student Record System: " << endl;

    while (true) {
        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Search Student by ID";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter ID: ";
            cin >> s.id;
            cout << "Enter Name: ";
            cin >> s.name;
            cout << "Enter Marks: ";
            cin >> s.marks;
            students.push_back(s);
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No student records available.\n";
                continue;
            }

            cout << "\mStudent List: \n";
            for (auto &s : students) {
                cout << "ID: " << s.id
                     << " Name: " << s.name
                     << " Marks: " << s.marks << endl;
            }
        }
        else if (choice == 3) {
            int searchId;
            cout << "Enter ID to search: ";
            cin >> searchId;

            bool found = false;
            for (auto &s : students) {
                if (s.id == searchId) {
                    cout << "ID: " << s.id
                         << " Name: " << s.name
                         << " Marks: " << s.marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found!" << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
