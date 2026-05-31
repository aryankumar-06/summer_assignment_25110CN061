#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer.";
        return 0;
    }

    int first = 0, second = 1, fibTerm;

    if (n == 1) {
        fibTerm = first;
    }
    else if (n == 2) {
        fibTerm = second;
    }
    else {
        for (int i = 3; i <= n; i++) {
            fibTerm = first + second;
            first = second;
            second = fibTerm;
        }
    }

    cout << "The " << n << "th Fibonacci term is: " << fibTerm;

    return 0;
}