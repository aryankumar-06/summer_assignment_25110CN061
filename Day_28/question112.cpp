#include <iostream>
#include <string>
using namespace std;

class Contact
{
public:
    string name;
    string phone;
    string email;
};

int main()
{
    Contact contacts[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Display All Contacts\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, contacts[count].name);

            cout << "Enter Phone Number: ";
            getline(cin, contacts[count].phone);

            cout << "Enter Email: ";
            getline(cin, contacts[count].email);

            count++;
            cout << "Contact Added Successfully!\n";
            break;

        case 2:
        {
            string searchName;
            bool found = false;

            cin.ignore();
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            for (int i = 0; i < count; i++)
            {
                if (contacts[i].name == searchName)
                {
                    cout << "\nContact Found\n";
                    cout << "Name  : " << contacts[i].name << endl;
                    cout << "Phone : " << contacts[i].phone << endl;
                    cout << "Email : " << contacts[i].email << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }

        case 3:
            if (count == 0)
            {
                cout << "No Contacts Available.\n";
            }
            else
            {
                cout << "\n----- Contact List -----\n";
                for (int i = 0; i < count; i++)
                {
                    cout << "\nContact " << i + 1 << endl;
                    cout << "Name  : " << contacts[i].name << endl;
                    cout << "Phone : " << contacts[i].phone << endl;
                    cout << "Email : " << contacts[i].email << endl;
                }
            }
            break;

        case 4:
            cout << "Thank You for Using the Contact Management System!\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}