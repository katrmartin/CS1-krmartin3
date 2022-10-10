/* 
Program: Guess the Number
Created by: Katie Martin
Date: 10/7/22
CSI 111

Algorithm:
    1. create a function called randomNumber that generates a number between 1 and 20 and returns it
    2. create a function called readNumber that prompts a user to take a guess at the number and return the guessed number
        2.a number must be between 1 and 20 or it's rejected and user is prompted again
    3. create a function called checkGuess that takes 2 integers, compares them, and returns the result:
        3a. return 0 if equal, return -1 if the first num < second num, and return 2 otherwise
        3b. write 3 test cases using assert
    4. create a function called game that implements the logic of the game:
        4a. call the randomNumber function
        4b. until the game is over, program will ask player to guess number using readNumber
        4c. use checkGuess to compare guessed number and actual number
        4d. if player guesses within 6 tries, player wins and game over
        4e. if player doesn't guess within 6 tries, player loses and game over
        4f. for every wrong guess, program informs player if guess is too high or too low by calling checkGuess
    5. when game is over, tell player if they won or lost and reveal actual random number, especially if they lost
    6. game will continue to run until the user wants to quit
*/

#include <iostream>
#include <cstdlib>
#include <cassert>
#include <string>
#include <time.h>
using namespace std;

int randomNumber() {
    //seed generator
    int hiddenNumber;
    srand(time(NULL));
    //random number generator from 1 to 20
    hiddenNumber = rand() % 20 + 1;
    return hiddenNumber;

}

int readNumber() { //what parameters do I need?
    int guess;
    cin >> guess;
    if (1 <= guess || guess <= 20)
        return guess;
    else if (guess < 1 || guess > 20) {
        return -2;
    }
}

int checkGuess(int guess, int hidden) { //what parameters do I need?
    if (guess < 1 || guess > 20)
        return -2;
    else if(guess == hidden)
        return 0;
    else if(guess < hidden)
        return -1;
    else
        return 2;
}

void testCheckGuess() {
    assert(checkGuess(5, 10) == -1);
    assert(checkGuess(10, 10) == 0);
    assert(checkGuess(10, 5) == 2);
    cerr << "All test cased passed!" << endl;

}


int main(int argc, char* argv[]) {
    if (argc == 2 && string(argv[1]) == "test")
    {
        testCheckGuess();
        return 0;
    }

    string name;
    int guess, hidden, status;
    cout << "Welcome to the Guess the Number game! What is your name?" << endl;
    getline(cin, name);
    cout << "Hello " << name << "! I'm thinking of a number from 1 to 20." << endl;

    bool running = true;
    while (running == true) { //loop that prompts player if they want to play again
        cout << "You have 6 tries to guess the number. Take a guess: " << endl;
        hidden = randomNumber();
        
        bool found = false;
        for(int i = 1; i<=6; i++)
        {
            guess = readNumber();
            status = checkGuess(guess, hidden);
                if (status == 0){
                    cout << "Correct! You guessed " << hidden << " in " << i << " tries!" << endl;
                    found = true;
                    break;
                }
                else if (status == -1) cout << "Too low!" << endl;
                else if (status == 2) cout << "Too high!" << endl; 
                else {
                    cout << "Pick a number between 1 and 20.  Try again!" << endl;
                    i--;
                }
        }

        if(!found)
        {
            cout << "Sorry! You didn't get my number, " << hidden << ", in 6 tries!" << endl;
        }

      
        //asks player if they want to play again
            char response;
            cout << "Would you like to play again? (y/Y) ";
            cin >> response;
            
                if(response != 'y' && response != 'Y'){
                running = false;
        }
    }

    return 0;
}

