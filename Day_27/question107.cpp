#include <iostream>
#include <string>
using namespace std;

class Salary {
public:
    int empId;
    string name;
    float basic, hra, da, pf, netSalary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;

        cout << "Enter PF: ";
        cin >> pf;

        netSalary = basic + hra + da - pf;
    }

    void display() {
        cout << "\nEmployee ID : " << empId;
        cout << "\nName        : " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nHRA         : " << hra;
        cout << "\nDA          : " << da;
        cout << "\nPF          : " << pf;
        cout << "\nNet Salary  : " << netSalary << endl;
    }
};

int main() {
    Salary emp[100];
    int count = 0;
    int choice, id, index;

    do {
        cout << "\n========== Salary Management System ==========";
        cout << "\n1. Add Salary Record";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Record";
        cout << "\n4. Update Record";
        cout << "\n5. Delete Record";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < 100) {
                cout << "\nEnter Employee Salary Details\n";
                emp[count].input();
                count++;
                cout << "Salary record added successfully.\n";
            } else {
                cout << "Storage is full.\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No salary records available.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    emp[i].display();
                    cout << "-----------------------------\n";
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
                cout << "Record not found.\n";
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
                cout << "Enter new salary details:\n";
                emp[index].input();
                cout << "Record updated successfully.\n";
            } else {
                cout << "Record not found.\n";
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
                cout << "Record deleted successfully.\n";
            } else {
                cout << "Record not found.\n";
            }
            break;

        case 6:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}