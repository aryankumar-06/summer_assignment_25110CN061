#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    bool found[256] = {false};

    cout << "Common characters: ";

    for (int i = 0; i < str1.length(); i++) {
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j] && !found[(unsigned char)str1[i]]) {
                cout << str1[i] << " ";
                found[(unsigned char)str1[i]] = true;
            }
        }
    }

    return 0;
}