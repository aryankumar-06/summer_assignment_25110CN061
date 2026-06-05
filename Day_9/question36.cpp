#include <iostream>
using namespace std;

int main() {
    int size = 5;

    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {

            if (row == 1 || row == size || col == 1 || col == size) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}