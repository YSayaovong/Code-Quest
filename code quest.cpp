#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function prototypes
void showMainMenu();
void startLevel(int level);
void solveCodingChallenge();
void showChallengeInstructions();

int main() {
    int choice;

    showMainMenu();

    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                startLevel(1); // Start at level 1 for now
                break;
            case 2:
                cout << "Exiting game. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
        }

        showMainMenu();
    }
}

void showMainMenu() {
    cout << "Welcome to Code Quest!" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Exit" << endl;
}

void startLevel(int level) {
    cout << "Starting Level " << level << "..." << endl;
    solveCodingChallenge();
}

void solveCodingChallenge() {
    // Placeholder for coding challenge
    cout << "Here's a coding challenge for you!" << endl;
    showChallengeInstructions();

    // Simulate challenge completion
    string userAnswer;
    cout << "Enter your solution: ";
    cin >> userAnswer;

    if (userAnswer == "correct") { // Simulate checking the solution
        cout << "Congratulations! You solved the challenge." << endl;
    } else {
        cout << "Incorrect solution. Try again!" << endl;
    }
}

void showChallengeInstructions() {
    cout << "Challenge: Write a function that returns the sum of two integers." << endl;
    cout << "Example function signature: int sum(int a, int b);" << endl;
    // Provide more detailed instructions if needed
}
