#include <iostream>
#include <string>
using namespace std;

// Function to check palindrome
bool isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
            return false;

        left++;
        right--;
    }

    return true;
}

int main()
{
    string text;

    cout << "Enter a string: ";
    cin >> text;

    if (isPalindrome(text))
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}