#include <iostream>
using namespace std;

int main() {
    int decimalNum;
    string binaryNum = "";

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    if (decimalNum == 0) {
        cout << "Binary equivalent: 0";
        return 0;
    }

    while (decimalNum > 0) {
        binaryNum = char((decimalNum % 2) + '0') + binaryNum;
        decimalNum /= 2;
    }

    cout << "Binary equivalent: " << binaryNum;

    return 0;
}