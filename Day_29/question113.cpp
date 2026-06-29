#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        cout << "\n===== MENU DRIVEN CALCULATOR =====";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice)
        {
            case 1:
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                }
                else
                {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;

            case 5:
                cout << "Exiting Calculator..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}