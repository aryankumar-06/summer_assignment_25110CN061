#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binaryNum;
    int decimalNum = 0, position = 0;

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    while (binaryNum > 0) {
        int digit = binaryNum % 10;

        if (digit == 1) {
            decimalNum += pow(2, position);
        }

        binaryNum /= 10;
        position++;
    }

    cout << "Decimal equivalent: " << decimalNum;

    return 0;
}