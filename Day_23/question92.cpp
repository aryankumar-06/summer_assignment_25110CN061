#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    char maxChar = str[0];
    int maxCount = 0;

    // Find character with maximum frequency
    for (auto pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}