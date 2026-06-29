#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str1);

    do
    {
        cout << "\n===== MENU DRIVEN STRING OPERATIONS =====";
        cout << "\n1. Display String";
        cout << "\n2. Find Length";
        cout << "\n3. Concatenate String";
        cout << "\n4. Reverse String";
        cout << "\n5. Compare Strings";
        cout << "\n6. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                cout << "String: " << str1 << endl;
                break;

            case 2:
                cout << "Length of String = " << str1.length() << endl;
                break;

            case 3:
                cout << "Enter another string: ";
                getline(cin, str2);
                cout << "Concatenated String: " << str1 + str2 << endl;
                break;

            case 4:
            {
                string temp = str1;
                reverse(temp.begin(), temp.end());
                cout << "Reversed String: " << temp << endl;
                break;
            }

            case 5:
                cout << "Enter another string: ";
                getline(cin, str2);

                if (str1 == str2)
                    cout << "Both strings are equal." << endl;
                else
                    cout << "Strings are not equal." << endl;
                break;

            case 6:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}