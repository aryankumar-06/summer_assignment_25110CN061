#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== Simple Quiz Application =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. High-Level Language\n2. Assembly Language\n3. Machine Language\n4. Binary Language\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 4
    cout << "\n4. Which symbol is used for comments in C++ (single line)?\n";
    cout << "1. /* */\n2. #\n3. //\n4. %%\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 5
    cout << "\n5. What is 10 + 20?\n";
    cout << "1. 20\n2. 25\n3. 30\n4. 40\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << "Excellent! Perfect Score!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}