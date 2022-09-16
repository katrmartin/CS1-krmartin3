/*
Kattis - The Last Problem
User-defined functions and library functions lab
Updated by: Katie Martin
CSCI 111
Date: 9/16/22

Read and solve the Last Problem on Kattis

Algorithm:
    1. read the input string
    2. create the output as asked and print it

*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <string>
using namespace std;

// Function prototypes
// Function prototypes
// Function finds the answer from given string and restuns the result as a string
string twilight(const string&);
// Function reads the data from standard input and returns the data
string readData();

int main()
{
	string input = "input";
	// step1. read data
	input = readData();
	// FIXME1: Call twilight function passing input as an argument #FIXED
	// store the returned result into answer variable
	string answer = input;
	// print answer
    answer = twilight(input);
	printf("%s\n", answer.c_str());
	return 0;
}

// Function implementation
string readData() {
	string input;
	// FIXME2: using getline reade and store the data into input variable #FIXED
    getline(cin,input);
    //cout << "Thank you, " << input << ", and farewell!" << "\n";
	// FIXME3 return input data #FIXED
	return input;
}

// Function implementation
string twilight(const string& input) {
	string ans = "Thank you, " + input + ", and farewell!";
	return ans;
} 