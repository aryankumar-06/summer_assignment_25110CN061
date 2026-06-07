#include <iostream>
using namespace std;

// Function to find maximum of two numbers
int findMaximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int maximum = findMaximum(num1, num2);

    cout << "Maximum number = " << maximum << endl;

    return 0;
}