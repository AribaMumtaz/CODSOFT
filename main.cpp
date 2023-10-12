#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Seed the random number generator
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "\n\t\t\tWelcome to the Number Guessing Game!" << endl;
    cout << "\n\t\t\tI'm thinking of a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "\nToo low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "\nToo high! Try again." << endl;
        } else {
            cout << "\n\t\tCongratulations! You guessed the number (" << secretNumber << ") in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}