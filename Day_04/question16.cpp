#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int originalNum = num;
        int temp = num;
        int digitCount = 0;
        long long sum = 0;

        // Count digits
        while (temp > 0) {
            digitCount++;
            temp /= 10;
        }

        temp = num;

        // Calculate sum of digits raised to digit count
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digitCount);
            temp /= 10;
        }

        if (sum == originalNum) {
            cout << originalNum << " ";
        }
    }

    return 0;
}