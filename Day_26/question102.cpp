#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "===== Voting Eligibility System =====" << endl;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else if (age > 0) {
        cout << "You are not eligible to vote." << endl;
        cout << "You can vote after " << (18 - age) << " year(s)." << endl;
    } else {
        cout << "Invalid age entered." << endl;
    }

    return 0;
}