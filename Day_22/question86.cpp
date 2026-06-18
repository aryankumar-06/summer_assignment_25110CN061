#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int wordCount = 0;
    bool inWord = false;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (char ch : sentence) {
        if (ch != ' ' && !inWord) {
            wordCount++;
            inWord = true;
        }
        else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}