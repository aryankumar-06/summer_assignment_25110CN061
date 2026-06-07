#include <iostream>
using namespace std;

int main() {
    int totalRows = 5;
    char currentChar = 'A';

    for (int row = 1; row <= totalRows; row++) {
        for (int count = 1; count <= row; count++) {
            cout << currentChar;
        }
        cout << endl;
        currentChar++;
    }

    return 0;
}