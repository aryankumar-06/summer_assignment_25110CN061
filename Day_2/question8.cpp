#include <iostream>
using namespace std;

int main() {
    int number, original, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    while (number != 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (original == reverse)
        cout << "The number is a Palindrome";
    else
        cout << "The number is not a Palindrome";

    return 0;
}