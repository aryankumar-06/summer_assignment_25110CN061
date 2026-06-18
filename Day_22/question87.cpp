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

    cout << "\nCharacter Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}