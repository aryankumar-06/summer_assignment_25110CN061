#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    string department;
    float salary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID : " << empId;
        cout << "\nName        : " << name;
        cout << "\nDepartment  : " << department;
        cout << "\nSalary      : " << salary << endl;
    }
};

int main() {
    Employee emp[100];
    int count = 0;
    int choice, id, index;

    do {
        cout << "\n========== Employee Management System ==========";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < 100) {
                cout << "\nEnter Employee Details\n";
                emp[count].input();
                count++;
                cout << "Employee record added successfully.\n";
            } else {
                cout << "Employee storage is full.\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\n----- Employee Records -----\n";
                for (int i = 0; i < count; i++) {
                    emp[i].display();
                    cout << "----------------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to search: ";
            cin >> id;
            index = -1;

            for (int i = 0; i < count; i++) {
                if (emp[i].empId == id) {
                    index = i;
                    break;
                }
            }

            if (index != -1)
                emp[index].display();
            else
                cout << "Employee not found.\n";
            break;

        case 4:
            cout << "Enter Employee ID to update: ";
            cin >> id;
            index = -1;

            for (int i = 0; i < count; i++) {
                if (emp[i].empId == id) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                cout << "Enter new employee details:\n";
                emp[index].input();
                cout << "Employee record updated successfully.\n";
            } else {
                cout << "Employee not found.\n";
            }
            break;

        case 5:
            cout << "Enter Employee ID to delete: ";
            cin >> id;
            index = -1;

            for (int i = 0; i < count; i++) {
                if (emp[i].empId == id) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                for (int i = index; i < count - 1; i++) {
                    emp[i] = emp[i + 1];
                }
                count--;
                cout << "Employee record deleted successfully.\n";
            } else {
                cout << "Employee not found.\n";
            }
            break;

        case 6:
            cout << "Thank you! Program terminated.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}