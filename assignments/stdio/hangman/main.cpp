/*

stdIO Homework 1
    Hangman - standard input and output

    Updated By: Katie Martin #FIXME1
    Date: 9/7/22 #FIXME2

    This program prints the 7 stages of the hangman game on the console #FIXME3 #FIXED

    Algorithm steps:
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values

*/

using namespace std; //resolve cout, cin, endl names

#include<iostream>
#include<string>

int main() {

    string name;

    cout << "\n Hey there, what's your name? \n";
    getline (cin, name);
    cout << " Nice meeting you, " << name << '!' << endl;

cout << "This hangman game is under construction... but for now I can show you what the stages will look like! \n ";

cout << "\n Press enter to see Stage 0!";
cin.get();

cout << "\n Stage 0" << endl;

cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << " _____|_________ \n" << endl;




    return 0;

}




