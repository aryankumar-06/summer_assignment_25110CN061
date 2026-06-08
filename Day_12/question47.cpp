#include <iostream>
using namespace std;

// Function to print Fibonacci series
void fibonacci(int n)
{
    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int terms;

    cout << "Enter the number of terms: ";
    cin >> terms;

    fibonacci(terms);

    return 0;
}