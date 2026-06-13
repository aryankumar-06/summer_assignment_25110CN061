#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int inter[n1];
    int k = 0;

    // Find intersection
    for (int i = 0; i < n1; i++) {
        bool inSecond = false;

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                inSecond = true;
                break;
            }
        }

        // check duplicates in result array
        if (inSecond) {
            bool alreadyAdded = false;

            for (int x = 0; x < k; x++) {
                if (inter[x] == arr1[i]) {
                    alreadyAdded = true;
                    break;
                }
            }

            if (!alreadyAdded) {
                inter[k++] = arr1[i];
            }
        }
    }

    cout << "\nIntersection of Arrays: ";
    for (int i = 0; i < k; i++) {
        cout << inter[i] << " ";
    }

    if (k == 0) {
        cout << "No common elements";
    }

    return 0;
}