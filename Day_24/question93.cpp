#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    string text;
    
    cout << "Enter a string: ";
    getline(cin, text);

    unordered_map<char, int> frequency;

    // Count frequency of each character
    for (char ch : text) {
        frequency[ch]++;
    }

    // Find first non-repeating character
    bool found = false;
    for (char ch : text) {
        if (frequency[ch] == 1) {
            cout << "First non-repeating character: " << ch << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}