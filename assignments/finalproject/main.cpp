/*
Final Project
Hangman Game
Made by: Katie Martin
12/6/22
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

int main() {
    bool playAgain = true;
    char play;
    vector<string> words;
    ifstream file;
    file.open("words.txt");
    string word;
    while (file >> word)
    {
        words.push_back(word);
    }

    while (playAgain) {

    
    //vector<string> words = {"apple", "ball", "cat"};
    playGame(words);

    cout << "Would you like to play again? (Y/N) ";
    cin >> play;
        if(play == 'Y' or play == 'y') {
            playAgain = true;
        }
        else {
            playAgain = false;
        }

    }
    return 0;

}