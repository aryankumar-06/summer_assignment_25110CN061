#include <iostream>
using namespace std;

int rev = 0;

int reverseNumber(int n)
{
    if (n == 0)
    {
        return rev;
    }

    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverseNumber(num);

    return 0;
}