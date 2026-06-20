#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams." << endl;
        return 0;
    }

    int frequency[256] = {0};

    for (char ch : str1) {
        frequency[(unsigned char)ch]++;
    }

    for (char ch : str2) {
        frequency[(unsigned char)ch]--;
    }

    bool isAnagram = true;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}