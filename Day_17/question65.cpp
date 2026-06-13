#include <iostream>
using namespace std;

int main() {
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;

    int arr1[size1];
    cout << "Enter the elements of the first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int arr2[size2];
    cout << "Enter the elements of the second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int merged[size1 + size2];

    // Copy elements of first array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of second array
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    cout << "\nMerged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}