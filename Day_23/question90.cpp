#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    unordered_set<char> seen;
    bool found = false;

    for (char ch : str) {
        if (seen.find(ch) != seen.end()) {
            cout << "First repeating character: " << ch << endl;
            found = true;
            break;
        }
        seen.insert(ch);
    }

    if (!found) {
        cout << "No repeating character found." << endl;
    }

    return 0;
}