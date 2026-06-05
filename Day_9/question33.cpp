#include <iostream>
using namespace std;

int main() {
    int totalRows = 5;

    for (int row = totalRows; row >= 1; row--) {
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}