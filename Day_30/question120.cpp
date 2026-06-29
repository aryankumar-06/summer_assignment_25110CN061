#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    int marks;
};

Student s[100];
int count = 0;

void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> s[count].roll;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s[count].name);

    cout << "Enter Marks: ";
    cin >> s[count].marks;

    count++;
    cout << "Student added successfully.\n";
}

void displayStudents()
{
    if (count == 0)
    {
        cout << "\nNo records found.\n";
        return;
    }

    cout << "\n-------------------------------------------\n";
    cout << "Roll\tName\t\tMarks\n";
    cout << "-------------------------------------------\n";

    for (int i = 0; i < count; i++)
    {
        cout << s[i].roll << "\t"
             << s[i].name << "\t\t"
             << s[i].marks << endl;
    }
}

void searchStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll Number : " << s[i].roll << endl;
            cout << "Name        : " << s[i].name << endl;
            cout << "Marks       : " << s[i].marks << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student not found.\n";
}

void updateMarks()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            cout << "Enter New Marks: ";
            cin >> s[i].marks;
            cout << "Marks updated successfully.\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student not found.\n";
}

void deleteStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            for (int j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            count--;
            found = true;
            cout << "Record deleted successfully.\n";
            break;
        }
    }

    if (!found)
        cout << "Student not found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}