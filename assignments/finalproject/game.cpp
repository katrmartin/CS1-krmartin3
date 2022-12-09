#include <vector>
#include <string>
#include <iostream>
#include "game.h"
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

int getRandomNumber(int maxNum) { //random number to pick random word
    srand(time(NULL));
    int randNum = rand()%maxNum;
    return randNum;

}
string getRandomWord(const vector<string> & words) { //random word picker from word.txt
    assert(words.size() > 0);
    int randIndex = getRandomNumber(words.size());
    return words[randIndex];

}

void displayWord(string & word) { //displaying word, purpose to be changed into dashes to be hidden word
    for(auto ch: word)
    cout << ch << " ";
    cout << endl;
}

void playGame(const vector<string> & words) {

        //open input file and read the words into words vector
    string word = getRandomWord(words); //random word
    cout << "hidden word = " << word << endl; //displays random word for debugging
    string dWord = string(word.size(), '_'); //format for dashes in word
    displayWord(dWord); //hidden word in dashes

 //need to make correct guessed letter replace dash spot in hidden word


    bool gameOver = false;
    int tries = 0;
    int maxTries = 6;
    char letter;

    cout << "I'm thinking of a word ... you have 6 tries to guess the word!" << endl;

    while (not gameOver and tries < maxTries) { //and word is not found
        //logic of game
        
        cout << "Please enter a letter: ";
        cin >> letter;
        char guess = letter;

        if (word.find(tolower(guess)) == string::npos && word.find(toupper(guess)) == string::npos) {
            cout << "Incorrect! Try again!" << endl;
            tries ++;
            cout << "You have " << 6 - tries << " tries left!" << endl;
            cout << endl;
        }
        else {
            cout << "Correct! You found a letter!" << endl;
            cout << "You have " << 6 - tries << " tries left!" << endl;
            cout << endl;

            for(int i = 0; i < word.length(); i++)
            {
                if(tolower(word[i]) == tolower(guess))
                {
                    dWord[i] = tolower(guess);
                }
            }

        }

    for(int i = 0; i < word.length(); i++)
        {
             word[i] = tolower(word[i]);
        }
    
    for(int i = 0; i < dWord.length(); i++)
        {
             dWord[i] = tolower(dWord[i]);
        }
        
        displayWord(dWord);


        if(dWord == word)
        {
            gameOver = true;
        }


    }
        if (tries > 5) {
            cout << "You didn't guess me word arghhhh!!! The word I was thinking of was " << word << endl;
        }
        else
            cout << "Congrats you found the word!" << endl;
        

//if all letters are found before using up all the tries, user wins game

}
