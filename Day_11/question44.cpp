#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial of a negative number is not defined." << endl;
    }
    else
    {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }

    return 0;
}