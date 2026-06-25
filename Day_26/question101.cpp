#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try a smaller number." << endl;
        }
        else if (userGuess < secretNumber) {
            cout << "Too low! Try a larger number." << endl;
        }
        else {
            cout << "\nCongratulations! You guessed the correct number." << endl;
            cout << "Total attempts: " << attempts << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}