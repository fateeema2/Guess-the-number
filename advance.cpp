#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void playGame(int minRange, int maxRange, int maxAttempts, string playerName) {
    int numberToGuess = rand() % (maxRange - minRange + 1) + minRange;
    int userGuess, numberOfTries = 0;

    cout << "I have selected a number between " << minRange << " and " << maxRange << ". Can you guess it?" << endl;

    while (numberOfTries < maxAttempts) {
        cout << "Enter your guess (" << maxAttempts - numberOfTries << " attempts remaining): ";
        cin >> userGuess;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        numberOfTries++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations, " << playerName << "! You guessed the number in " << numberOfTries << " tries!" << endl;
            return;
        }
    }

    cout << "Sorry, you've used all " << maxAttempts << " attempts. The correct number was " << numberToGuess << "." << endl;
}

int main() {
    srand(time(0));

    string playerName;
    char playAgain;
    int minRange, maxRange, maxAttempts;
    int difficulty;

    cout << "Enter your name: ";
    cin >> playerName;

    do {
        cout << "Choose a difficulty level (1- Easy, 2- Medium, 3- Hard): ";
        cin >> difficulty;

        switch (difficulty) {
            case 1:
                minRange = 1;
                maxRange = 50;
                maxAttempts = 10;
                break;
            case 2:
                minRange = 1;
                maxRange = 100;
                maxAttempts = 8;
                break;
            case 3:
                minRange = 1;
                maxRange = 200;
                maxAttempts = 6;
                break;
            default:
                cout << "Invalid choice! Defaulting to Medium difficulty." << endl;
                minRange = 1;
                maxRange = 100;
                maxAttempts = 8;
        }

        playGame(minRange, maxRange, maxAttempts, playerName);

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thank you for playing, " << playerName << "!" << endl;
    return 0;
}
