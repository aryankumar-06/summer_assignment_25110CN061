#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a;
    int y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "GCD of " << a << " and " << b << " is: " << x << endl;

    return 0;
}