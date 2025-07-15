#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
    const int maxAttempts = 5;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    cout << "You have " << maxAttempts << " attempts to guess it.\n";

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;
        ++attempts;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! ";
        } else {
            cout << "Too high! ";
        }

        cout << "Attempts remaining: " << (maxAttempts - attempts) << "\n";
    }

    if (guess != secretNumber) {
     cout << "Sorry, you've used all your attempts. The number was " << secretNumber << ".\n";
    }

    return 0;
}
