#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Product item[100];
    int count = 0;
    int choice, searchId;
    bool found;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Quantity";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Product ID: ";
                cin >> item[count].id;

                cin.ignore();

                cout << "Enter Product Name: ";
                getline(cin, item[count].name);

                cout << "Enter Quantity: ";
                cin >> item[count].quantity;

                cout << "Enter Price: ";
                cin >> item[count].price;

                count++;
                cout << "Product added successfully.\n";
                break;

            case 2:
                if (count == 0)
                {
                    cout << "No products available.\n";
                }
                else
                {
                    cout << "\nID\tName\t\tQuantity\tPrice\n";
                    cout << "---------------------------------------------\n";

                    for (int i = 0; i < count; i++)
                    {
                        cout << item[i].id << "\t"
                             << item[i].name << "\t\t"
                             << item[i].quantity << "\t\t"
                             << item[i].price << endl;
                    }
                }
                break;

            case 3:
                if (count == 0)
                {
                    cout << "Inventory is empty.\n";
                    break;
                }

                cout << "Enter Product ID to search: ";
                cin >> searchId;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (item[i].id == searchId)
                    {
                        cout << "\nProduct Found\n";
                        cout << "ID: " << item[i].id << endl;
                        cout << "Name: " << item[i].name << endl;
                        cout << "Quantity: " << item[i].quantity << endl;
                        cout << "Price: " << item[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found.\n";

                break;

            case 4:
                if (count == 0)
                {
                    cout << "Inventory is empty.\n";
                    break;
                }

                cout << "Enter Product ID: ";
                cin >> searchId;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (item[i].id == searchId)
                    {
                        cout << "Enter New Quantity: ";
                        cin >> item[i].quantity;
                        cout << "Quantity updated successfully.\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found.\n";

                break;

            case 5:
                cout << "Exiting Inventory Management System...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}