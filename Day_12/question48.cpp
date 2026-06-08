#include <iostream>
using namespace std;

// Function to check Perfect Number
bool isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return (sum == num);
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPerfect(number))
        cout << number << " is a Perfect Number.";
    else
        cout << number << " is not a Perfect Number.";

    return 0;
}