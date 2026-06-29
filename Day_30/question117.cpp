#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int marks;
};

int main()
{
    Student student[100];
    int count = 0;
    int choice, roll;
    bool found;

    do
    {
        cout << "\n===== STUDENT RECORD SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> student[count].rollNo;

                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, student[count].name);

                cout << "Enter Marks: ";
                cin >> student[count].marks;

                count++;
                cout << "Student record added successfully.\n";
                break;

            case 2:
                if (count == 0)
                {
                    cout << "No student records found.\n";
                }
                else
                {
                    cout << "\n---------------------------------------------\n";
                    cout << "Roll No\tName\t\tMarks\n";
                    cout << "---------------------------------------------\n";

                    for (int i = 0; i < count; i++)
                    {
                        cout << student[i].rollNo << "\t"
                             << student[i].name << "\t\t"
                             << student[i].marks << endl;
                    }
                }
                break;

            case 3:
                if (count == 0)
                {
                    cout << "No student records available.\n";
                    break;
                }

                cout << "Enter Roll Number to search: ";
                cin >> roll;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (student[i].rollNo == roll)
                    {
                        cout << "\nStudent Found\n";
                        cout << "Roll Number : " << student[i].rollNo << endl;
                        cout << "Name        : " << student[i].name << endl;
                        cout << "Marks       : " << student[i].marks << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Student not found.\n";

                break;

            case 4:
                if (count == 0)
                {
                    cout << "No student records available.\n";
                    break;
                }

                cout << "Enter Roll Number: ";
                cin >> roll;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (student[i].rollNo == roll)
                    {
                        cout << "Enter New Marks: ";
                        cin >> student[i].marks;
                        cout << "Marks updated successfully.\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Student not found.\n";

                break;

            case 5:
                cout << "Exiting Student Record System...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}