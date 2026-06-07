#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, originalNumber, digitCount = 0;
    int digit;
    long long sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Count the number of digits
    int temp = number;
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }

    // Calculate the sum of digits raised to the power of digit count
    temp = number;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digitCount);
        temp /= 10;
    }

    // Check Armstrong condition
    if (sum == originalNumber)
        cout << originalNumber << " is an Armstrong number.";
    else
        cout << originalNumber << " is not an Armstrong number.";

    return 0;
}