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

    cout << "\n Hey there, what's your name? \n\n";
    getline (cin, name);
    cout << "\n Nice meeting you, " << name << "!\n\n" << endl;

cout << "This hangman game is under construction... but for now I can show you what the stages will look like! \n\n ";

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

cout << "\n Press enter to see Stage 1!";
cin.get();

cout << "\n Stage 1" << endl;

cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |       O" << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << " _____|_________ \n" << endl;

cout << "\n Press enter to see Stage 2!";
cin.get();

cout << "\n Stage 2" << endl;

cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |       O" << endl;
cout << "      |       |"<< endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << " _____|_________ \n" << endl;

cout << "\n Press enter to see Stage 3!";
cin.get();

cout << "\n Stage 3" << endl;

cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |       O" << endl;
cout << "      |       |"<< endl;
cout << "      |       |"<< endl;
cout << "      |" << endl;
cout << "      |" << endl;
cout << " _____|_________ \n" << endl;

cout << "\n Press enter to see Stage 4!";
cin.get();

cout << "\n Stage 4" << endl;


cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |       O" << endl;
cout << "      |       |" << endl;
cout << "      |       |" << endl;
cout << "      |        \\" << endl;
cout << "      |" << endl;
cout << " _____|_________ \n" << endl;

cout << "\n Press enter to see Stage 5!";
cin.get();

cout << "\n Stage 5" << endl;

cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |       O" << endl;
cout << "      |       |"<< endl;
cout << "      |       |" << endl;
cout << "      |      / \\" << endl;
cout << "      |" << endl;
cout << " _____|_________ \n" << endl;

cout << "\n Press enter to see Stage 6!";
cin.get();

cout << "\n Stage 6" << endl;

cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |       O" << endl;
cout << "      |      \\|"<< endl;
cout << "      |       |"<< endl;
cout << "      |      / \\" << endl;
cout << "      |" << endl;
cout << " _____|_________ \n" << endl;

cout << "\n Press enter to see Stage 7!";
cin.get();

cout << "\n Stage 7" << endl;

cout << "      |--------------|" << endl;
cout << "      |/      | " << endl;
cout << "      |       O" << endl;
cout << "      |      \\|/"<< endl;
cout << "      |       |"<< endl;
cout << "      |      / \\" << endl;
cout << "      |  "<< endl;
cout << " _____|_________ \n" << endl;

cout << "Thank you for viewing! Press enter to exit the program..." << endl;

cin.get();


    return 0;

}


