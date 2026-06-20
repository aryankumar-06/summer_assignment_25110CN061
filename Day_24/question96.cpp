#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : str) {
        freq[(unsigned char)ch]++;
    }

    char maxChar = str[0];
    int maxCount = 0;

    // Find character with maximum frequency
    for (char ch : str) {
        if (freq[(unsigned char)ch] > maxCount) {
            maxCount = freq[(unsigned char)ch];
            maxChar = ch;
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}