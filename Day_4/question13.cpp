#include <iostream>
using namespace std;

int main() {
    int terms;

    cout << "Enter the number of terms: ";
    cin >> terms;

    int first = 0, second = 1, nextTerm;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; i++) {
        if (i == 1) {
            cout << first << " ";
        }
        else if (i == 2) {
            cout << second << " ";
        }
        else {
            nextTerm = first + second;
            cout << nextTerm << " ";
            first = second;
            second = nextTerm;
        }
    }

    return 0;
}