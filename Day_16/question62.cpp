#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    int maxElement = arr[0];
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] > maxCount) {
            maxCount = freq[arr[i]];
            maxElement = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}