#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0;
    int choice, key, i;
    int largest, smallest;
    int sum;

    do
    {
        cout << "\n===== MENU DRIVEN ARRAY OPERATIONS =====";
        cout << "\n1. Create Array";
        cout << "\n2. Display Array";
        cout << "\n3. Search Element";
        cout << "\n4. Find Largest Element";
        cout << "\n5. Find Smallest Element";
        cout << "\n6. Find Sum of Elements";
        cout << "\n7. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter " << n << " elements:\n";
                for (i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                cout << "Array created successfully.\n";
                break;

            case 2:
                if (n == 0)
                {
                    cout << "Array is empty.\n";
                }
                else
                {
                    cout << "Array Elements: ";
                    for (i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (n == 0)
                {
                    cout << "Array is empty.\n";
                    break;
                }

                cout << "Enter element to search: ";
                cin >> key;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == key)
                    {
                        cout << "Element found at position " << i + 1 << endl;
                        break;
                    }
                }

                if (i == n)
                {
                    cout << "Element not found.\n";
                }
                break;

            case 4:
                if (n == 0)
                {
                    cout << "Array is empty.\n";
                    break;
                }

                largest = arr[0];
                for (i = 1; i < n; i++)
                {
                    if (arr[i] > largest)
                        largest = arr[i];
                }

                cout << "Largest Element = " << largest << endl;
                break;

            case 5:
                if (n == 0)
                {
                    cout << "Array is empty.\n";
                    break;
                }

                smallest = arr[0];
                for (i = 1; i < n; i++)
                {
                    if (arr[i] < smallest)
                        smallest = arr[i];
                }

                cout << "Smallest Element = " << smallest << endl;
                break;

            case 6:
                if (n == 0)
                {
                    cout << "Array is empty.\n";
                    break;
                }

                sum = 0;
                for (i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                cout << "Sum of Elements = " << sum << endl;
                break;

            case 7:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}