/*
Kattis - Stuck In A Time Loop
Loop Lab
Updated By: Katie Martin
CSCI 111
Date: 10/19/22
Read and solve the Kattis problem: https://open.kattis.com/problems/timeloop  
Algorithm Steps:
  1. Using a function, read and return N
  2. Declare a dynamic variable to store, N returned by function in 1.
  3. Define a function to get the necessary spell given N
  4. Define a function to print answer
    4.i Within the function, use a loop to call spell function to print spell N times:
      1 Abracadabra
      2 Abracadabra
      ...
      N Abracadabra
*/

#include <iostream>
#include <cassert>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

// declare alias pos_int of type "unsigned int"
using pos_int = unsigned short;

// Function taken an integer n and returns
// spell: n Abracadabra
string spell(const pos_int);

// function to test spell function
void testSpell();

// function to print the final answer
void printAnswer(const pos_int);

// function to read N
pos_int readNumber();

int main(int argc, char* argv[]) {
  if (argc == 2 and string(argv[1]) == string("test")) {
    // FIXME1: call testSpell function #FIXED
    testSpell();
    return 0;
  }
  // declare a dynamic variable to store N
  pos_int *N = new pos_int; 
  //FIXME2: Call readNumber function and assign the returned value to N #FIXED
  //FIXME3: Call answer function passing proper argument #FIXED
  *N = readNumber();
  printAnswer(*N);
}

pos_int readNumber() {
  //FIXME4: Declare a dynamic variable to read and store N and return it #FIXED
  pos_int *N = new pos_int;
  cin >> *N;
  return *N;
  return 0;
}

string spell(pos_int n) {
  return to_string(n) + " Abracadabra";
}

void testSpell() {
  pos_int * n = new pos_int;
  *n = 10;
  assert(spell(*n) == "10 Abracadabra");
  // FIXME5: Add two more test cases #FIXED
  *n = 3;
  assert(spell(*n) == "3 Abracadabra");
  assert(spell(7) == "7 Abracadabra");

  cerr << "Yay... all test cases passed!\n";
}

void printAnswer(const pos_int N) {
  for(pos_int i=1; i<=N; i++) {
    printf("%s\n", spell(i).c_str());
  }
}