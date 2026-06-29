#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book library[100];
    int count = 0;
    int choice, id;
    bool found;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Book ID: ";
                cin >> library[count].bookId;

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, library[count].title);

                cout << "Enter Author Name: ";
                getline(cin, library[count].author);

                library[count].issued = false;
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
                    cout << "\n-------------------------------------------------------------\n";
                    cout << "ID\tTitle\t\tAuthor\t\tStatus\n";
                    cout << "-------------------------------------------------------------\n";

                    for (int i = 0; i < count; i++)
                    {
                        cout << library[i].bookId << "\t"
                             << library[i].title << "\t\t"
                             << library[i].author << "\t\t"
                             << (library[i].issued ? "Issued" : "Available")
                             << endl;
                    }
                }
                break;

            case 3:
                if (count == 0)
                {
                    cout << "Library is empty.\n";
                    break;
                }

                cout << "Enter Book ID to search: ";
                cin >> id;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (library[i].bookId == id)
                    {
                        cout << "\nBook Found\n";
                        cout << "Title : " << library[i].title << endl;
                        cout << "Author: " << library[i].author << endl;
                        cout << "Status: "
                             << (library[i].issued ? "Issued" : "Available")
                             << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Book not found.\n";

                break;

            case 4:
                cout << "Enter Book ID to issue: ";
                cin >> id;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (library[i].bookId == id)
                    {
                        found = true;

                        if (!library[i].issued)
                        {
                            library[i].issued = true;
                            cout << "Book issued successfully.\n";
                        }
                        else
                        {
                            cout << "Book is already issued.\n";
                        }

                        break;
                    }
                }

                if (!found)
                    cout << "Book not found.\n";

                break;

            case 5:
                cout << "Enter Book ID to return: ";
                cin >> id;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (library[i].bookId == id)
                    {
                        found = true;

                        if (library[i].issued)
                        {
                            library[i].issued = false;
                            cout << "Book returned successfully.\n";
                        }
                        else
                        {
                            cout << "Book is already available.\n";
                        }

                        break;
                    }
                }

                if (!found)
                    cout << "Book not found.\n";

                break;

            case 6:
                cout << "Exiting Library System...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}