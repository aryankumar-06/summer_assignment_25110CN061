#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);

    int count[256] = {0};

    // Count frequency of each character
    for (char ch : str) {
        count[(unsigned char)ch]++;
    }

    // Find first character that repeats
    bool found = false;
    for (char ch : str) {
        if (count[(unsigned char)ch] > 1) {
            cout << "First repeating character: " << ch << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No repeating character found." << endl;
    }

    return 0;
}