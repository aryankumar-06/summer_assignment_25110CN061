#include <iostream>
using namespace std;

int main() {
    int a, b, max;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Find maximum of two numbers
    max = (a > b) ? a : b;

    int lcm = max;

    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;

    return 0;
}