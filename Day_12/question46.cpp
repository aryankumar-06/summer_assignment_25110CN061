#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int num)
{
    int original = num;
    int digits = 0;
    int sum = 0;

    // Count digits
    int temp = num;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers
    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong Number.";
    else
        cout << number << " is not an Armstrong Number.";

    return 0;
}