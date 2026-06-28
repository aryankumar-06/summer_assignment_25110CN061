#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book books[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Book ID: ";
            cin >> books[count].id;

            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[count].title);

            cout << "Enter Author Name: ";
            getline(cin, books[count].author);

            books[count].issued = false;
            count++;

            cout << "Book added successfully.\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "No books available.\n";
            }
            else
            {
                cout << "\nBook List:\n";
                for (int i = 0; i < count; i++)
                {
                    cout << "\nBook ID: " << books[i].id;
                    cout << "\nTitle: " << books[i].title;
                    cout << "\nAuthor: " << books[i].author;
                    cout << "\nStatus: ";
                    if (books[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << "\n--------------------------";
                }
            }
            break;

        case 3:
        {
            int searchId;
            bool found = false;

            cout << "Enter Book ID to search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++)
            {
                if (books[i].id == searchId)
                {
                    cout << "\nBook Found\n";
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    cout << "Status: ";
                    if (books[i].issued)
                        cout << "Issued\n";
                    else
                        cout << "Available\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 4:
        {
            int issueId;
            bool found = false;

            cout << "Enter Book ID to issue: ";
            cin >> issueId;

            for (int i = 0; i < count; i++)
            {
                if (books[i].id == issueId)
                {
                    if (!books[i].issued)
                    {
                        books[i].issued = true;
                        cout << "Book issued successfully.\n";
                    }
                    else
                    {
                        cout << "Book is already issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 5:
        {
            int returnId;
            bool found = false;

            cout << "Enter Book ID to return: ";
            cin >> returnId;

            for (int i = 0; i < count; i++)
            {
                if (books[i].id == returnId)
                {
                    if (books[i].issued)
                    {
                        books[i].issued = false;
                        cout << "Book returned successfully.\n";
                    }
                    else
                    {
                        cout << "Book was not issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 6:
            cout << "Thank you for using the Library Management System.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}