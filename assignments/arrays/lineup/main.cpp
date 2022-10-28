/*
Made by Katie Martin
Date: 10/27/22
Kattis - lineup

Algorithm:
    1. make dynamic array to read in as many names as user decides to input
    2. 

*/

#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

void userInput();
string order();

int main() {
    int size;
    string *names = new string[size];

    return 0;
}

void userInput(string names[], int size) {
    cout << "How many names would you like to enter: ";
    cin >> size;

    cout << "Please enter " << size << " names." << endl;
    for(int i = 0; i<size; i++) {
        cout << "Enter name: ";
        cin >> names[i];
    }

}

string order(string names[], int size) {
    string *newNamesA = new string[size];
    string *newNamesD = new string[size];
    newNamesA = names;
    newNamesD = names;
    newNamesA = sort(begin(newNamesA), end(newNamesD));
    newNamesD = sort(begin(newNamesD), end(newNamesD), greater<string>());
    if (names == newNamesA)
        return "ASCENDING";
    else if (names == newNamesD)
        return "DESCENDING";
    else
        return "NEITHER";



}