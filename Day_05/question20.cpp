#include <iostream>
using namespace std;

int main() {
    int num, largestPrimeFactor = -1;

    cout << "Enter a number: ";
    cin >> num;

    while (num % 2 == 0) {
        largestPrimeFactor = 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    if (num > 2) {
        largestPrimeFactor = num;
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}