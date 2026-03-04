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

    cout << "===== Student Record System =====" << endl;

    while (true) {
        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Exit";
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
            cout << "\n--- Student List ---\n";
            for (auto &s : students) {
                cout << "ID: " << s.id
                     << " Name: " << s.name
                     << " Marks: " << s.marks << endl;
            }
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
