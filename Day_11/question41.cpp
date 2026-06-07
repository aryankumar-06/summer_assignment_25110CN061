#include <iostream>
using namespace std;

// Function to find sum of two numbers
int findSum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = findSum(num1, num2);

    cout << "Sum = " << sum << endl;

    return 0;
}