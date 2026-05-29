#include <iostream>
using namespace std;

int main() {
    int number, digit;
    int product = 1;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        digit = number % 10;
        product = product * digit;
        number = number / 10;
    }

    cout << "Product of digits = " << product;

    return 0;
}