#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    unordered_set<int> seen;
    bool pairFound = false;

    for (int i = 0; i < n; i++) {
        int required = target - arr[i];

        if (seen.find(required) != seen.end()) {
            cout << "Pair found: " << required << " and " << arr[i] << endl;
            pairFound = true;
            break;
        }

        seen.insert(arr[i]);
    }

    if (!pairFound) {
        cout << "No pair found with the given sum." << endl;
    }

    return 0;
}