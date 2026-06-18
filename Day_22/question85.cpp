#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversed = "";

    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    // Check palindrome
    if (str == reversed) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}