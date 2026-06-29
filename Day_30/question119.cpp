#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int empId;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee emp[100];
    int count = 0;
    int choice, id;
    bool found;

    do
    {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Salary";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[count].empId;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, emp[count].name);

                cout << "Enter Department: ";
                getline(cin, emp[count].department);

                cout << "Enter Salary: ";
                cin >> emp[count].salary;

                count++;
                cout << "Employee added successfully.\n";
                break;

            case 2:
                if (count == 0)
                {
                    cout << "No employee records found.\n";
                }
                else
                {
                    cout << "\n-------------------------------------------------------------\n";
                    cout << "ID\tName\t\tDepartment\tSalary\n";
                    cout << "-------------------------------------------------------------\n";

                    for (int i = 0; i < count; i++)
                    {
                        cout << emp[i].empId << "\t"
                             << emp[i].name << "\t\t"
                             << emp[i].department << "\t\t"
                             << emp[i].salary << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Employee ID to search: ";
                cin >> id;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (emp[i].empId == id)
                    {
                        cout << "\nEmployee Found\n";
                        cout << "ID         : " << emp[i].empId << endl;
                        cout << "Name       : " << emp[i].name << endl;
                        cout << "Department : " << emp[i].department << endl;
                        cout << "Salary     : " << emp[i].salary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found.\n";

                break;

            case 4:
                cout << "Enter Employee ID: ";
                cin >> id;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (emp[i].empId == id)
                    {
                        cout << "Enter New Salary: ";
                        cin >> emp[i].salary;
                        cout << "Salary updated successfully.\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found.\n";

                break;

            case 5:
                cout << "Enter Employee ID to delete: ";
                cin >> id;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (emp[i].empId == id)
                    {
                        for (int j = i; j < count - 1; j++)
                        {
                            emp[j] = emp[j + 1];
                        }

                        count--;
                        found = true;
                        cout << "Employee record deleted successfully.\n";
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found.\n";

                break;

            case 6:
                cout << "Exiting Employee Management System...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}