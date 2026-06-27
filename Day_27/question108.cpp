#include <iostream>
#include <string>
using namespace std;

class Marksheet {
private:
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        total = 0;
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        percentage = total / 5.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n========== MARKSHEET ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Student Name: " << name << endl;

        cout << "\nSubject Marks\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << " : " << marks[i] << endl;
        }

        cout << "\nTotal Marks : " << total << " / 500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;

        if (grade == 'F')
            cout << "Result      : Fail" << endl;
        else
            cout << "Result      : Pass" << endl;
    }
};

int main() {
    Marksheet student;

    student.input();
    student.display();

    return 0;
}