
Here's a README description for the code you've provided:

Guess the Number Game
This is a C++ implementation of the "Guess the Number" game. In this game, the computer randomly selects a number within a given range, and the player must guess the number within a set number of attempts. The game offers multiple difficulty levels, each with different ranges and attempts. It also includes input validation and the option to play again after each round.

Features
Difficulty Levels: Players can choose from three difficulty levels:

Easy: Numbers between 1 and 50, with 10 attempts.
Medium: Numbers between 1 and 100, with 8 attempts.
Hard: Numbers between 1 and 200, with 6 attempts.
Input Validation: Ensures the player enters a valid number when guessing. If the input is invalid (e.g., non-numeric input), the program prompts the player to enter a valid number.

Replayability: After completing a round, the player is asked if they want to play again. The game restarts if the player selects 'Y' or 'y'. Any other input will end the game.

Random Number Generation: The program generates a random number within the selected range for each round of the game.

How to Play
When the game starts, enter your name.
Choose a difficulty level:
Easy: Guess a number between 1 and 50.
Medium: Guess a number between 1 and 100.
Hard: Guess a number between 1 and 200.
Enter your guess when prompted.
The program will tell you if your guess is too high, too low, or correct.
You have a limited number of attempts to guess the correct number based on the selected difficulty.
Once you guess the number or use all attempts, the game ends and displays the correct number if you were unsuccessful.
The game will ask if you want to play again.
Requirements
C++ Compiler (e.g., GCC or Clang)
C++ Standard Library
How to Compile and Run
Save the code to a file, for example, guess_the_number.cpp.
Open a terminal or command prompt.
Navigate to the directory where the file is saved.
License
This project is licensed under the MIT License.
