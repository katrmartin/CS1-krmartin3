/*
    stdIO Lab
    ASCII Art - using literals and variables

    Updated By: Katie Martin #FIXME1
    Date: 9/1/22 #FIXME2

    This program produces ASCII art on the console

    Algorithm steps:
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data

using namespace std; //resolve cout, cin, endl names

//main entry point of the program
int main() 
{
    string name;
    cout << "Enter your full name: ";
    //FIXME3: declare a variable to store name
    //FIXME4: prompt user to enter their name and store the value in variables #FIXED
    getline(cin, name);
    //FIXME5: greet the name using the variable as the following output
    //must output: Nice meeting you, <name>!
    cout << "Nice meeting you, " << name << '!' << endl;

cout << "Hope you like my Tom & Jerry's ASCII art...\n\n";

string line1 = " |\\_/|   ********************** (\\_/)\n";
cout << line1;
string line2 = " / @ @ \\ *      ASCII Art            *        (='.'=)\n";
cout << line2;
string line3 = "( > 0 < ) *  Author: <Katie Martin>        *  ( \" )_( \" )\n";
cout << line3;
string line4 = " >>x<<       *      CS Foundation Course   *\n";
cout << line4;
string line5 = " / O \\       *******************************\n";
cout << line5;

//FIXME6: use variable to print the second line of the graphic
//FIXME7: print the third line of the graphics
//FIXME8: use variable to print the fourth line
//FIXME9: use variable to print the fifth line
//Note: You can add more lines or print more ASCII arts of your choice if you'd like...

cout << "\nGood bye... hit enter to exit the program:" << '\n';
cin.get();
//FIXME10: make the console wait for the user input #FIXED

    return 0; //exit the program by returning to 0 status to the system
}