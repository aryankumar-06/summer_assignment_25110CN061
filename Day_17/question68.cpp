#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int a1[n1];
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> a1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int a2[n2];
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> a2[i];
    }

    int common[n1];
    int k = 0;

    // Find common elements
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a1[i] == a2[j]) {

                // check to avoid duplicates in result
                bool alreadyPresent = false;
                for (int x = 0; x < k; x++) {
                    if (common[x] == a1[i]) {
                        alreadyPresent = true;
                        break;
                    }
                }

                if (!alreadyPresent) {
                    common[k++] = a1[i];
                }
                break;
            }
        }
    }

    cout << "\nCommon Elements: ";
    if (k == 0) {
        cout << "No common elements";
    } else {
        for (int i = 0; i < k; i++) {
            cout << common[i] << " ";
        }
    }

    return 0;
}