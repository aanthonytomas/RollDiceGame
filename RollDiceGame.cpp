#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dice();
void getResult();

int main() {
    srand(time(0)); // Initialize random seed
    char playAgain;
    
    do {
        cout << "**************************************************************" << endl;
        cout << "******************** FIVE ROLLS DICE GAME ********************" << endl;
        cout << "**************************************************************" << endl;


        getResult();

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing! Goodbye.\n";
    return 0;
}

void getResult() {
    int myarray[5]; // Store the results of rolls

    cout << "Press ENTER to roll each die!";

    for (int i = 0; i < 5; i++) {
        cout << "Press ENTER to roll dice " << (i + 1) << "...";
        cin.ignore();  // Wait for user input (pressing Enter)
        
        int number = dice();
        myarray[i] = number;
        cout << "You rolled: " << number << endl;
    }

    cout << "\n**************************************************************" << endl;

    // Count even numbers
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        if (myarray[i] % 2 == 0) {  // Check if number is even
            counter++;
        }
    }

    // Determine win/loss condition
    if (counter >= 2) {
        cout << "🎉 You win! You rolled at least two even numbers! 🎉\n";
    } else {
        cout << "😞 You lose! Try again! 😞\n";
    }
}

int dice() {
    return 1 + (rand() % 6); // Returns a number between 1 and 6
}
