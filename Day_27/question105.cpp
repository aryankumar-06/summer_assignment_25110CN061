#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int age;
    float marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll Number : " << rollNo;
        cout << "\nName        : " << name;
        cout << "\nAge         : " << age;
        cout << "\nMarks       : " << marks << endl;
    }
};

int main() {
    Student students[100];
    int totalStudents = 0;
    int choice, roll, index;

    do {
        cout << "\n===== Student Record Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (totalStudents < 100) {
                cout << "\nEnter Student Details\n";
                students[totalStudents].input();
                totalStudents++;
                cout << "Student record added successfully.\n";
            } else {
                cout << "Storage is full.\n";
            }
            break;

        case 2:
            if (totalStudents == 0) {
                cout << "No student records available.\n";
            } else {
                cout << "\n----- Student Records -----\n";
                for (int i = 0; i < totalStudents; i++) {
                    students[i].display();
                    cout << "--------------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to search: ";
            cin >> roll;
            index = -1;

            for (int i = 0; i < totalStudents; i++) {
                if (students[i].rollNo == roll) {
                    index = i;
                    break;
                }
            }

            if (index != -1)
                students[index].display();
            else
                cout << "Student not found.\n";
            break;

        case 4:
            cout << "Enter Roll Number to update: ";
            cin >> roll;
            index = -1;

            for (int i = 0; i < totalStudents; i++) {
                if (students[i].rollNo == roll) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                cout << "Enter new details:\n";
                students[index].input();
                cout << "Record updated successfully.\n";
            } else {
                cout << "Student not found.\n";
            }
            break;

        case 5:
            cout << "Enter Roll Number to delete: ";
            cin >> roll;
            index = -1;

            for (int i = 0; i < totalStudents; i++) {
                if (students[i].rollNo == roll) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                for (int i = index; i < totalStudents - 1; i++) {
                    students[i] = students[i + 1];
                }
                totalStudents--;
                cout << "Record deleted successfully.\n";
            } else {
                cout << "Student not found.\n";
            }
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}