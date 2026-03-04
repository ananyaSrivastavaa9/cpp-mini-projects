#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[100];   // store up to 100 students
    int count = 0;
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student by Roll\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                cout << "\nEnter Roll: ";
                cin >> s[count].roll;

                cout << "Enter Name: ";
                cin >> s[count].name;

                cout << "Enter Marks: ";
                cin >> s[count].marks;

                count++;
                cout << "Student Added Successfully!\n";
                break;
            }

            case 2: {
                if(count == 0) {
                    cout << "⚠ No students found!\n";
                } else {
                    cout << "\n--- Student List ---\n";
                    for(int i = 0; i < count; i++) {
                        cout << "\nStudent " << i+1 << endl;
                        cout << "Roll: " << s[i].roll << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                    }
                }
                break;
            }

            case 3: {
                int searchRoll;
                bool found = false;

                cout << "Enter roll to search: ";
                cin >> searchRoll;

                for(int i = 0; i < count; i++) {
                    if(s[i].roll == searchRoll) {
                        cout << "\nStudent Found!\n";
                        cout << "Roll: " << s[i].roll << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        found = true;
                        break;
                    }
                }

                if(!found) {
                    cout << "Student not found!\n";
                }
                break;
            }

            case 4:
                cout << " Exiting program...\n";
                break;

            default:
                cout << "⚠ Invalid choice!\n";
        }

    } while(choice != 4);  

    return 0;
}
