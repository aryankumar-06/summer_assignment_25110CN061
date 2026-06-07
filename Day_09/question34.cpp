#include <iostream>
using namespace std;

int main() {
    int totalRows = 5;

    for (int row = totalRows; row >= 1; row--) {
        for (int num = 1; num <= row; num++) {
            cout << num;
        }
        cout << endl;
    }

    return 0;
}