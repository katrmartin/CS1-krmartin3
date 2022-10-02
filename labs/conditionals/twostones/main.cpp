/*
Kattis - Take Two Stones
Conditional Logic Lab
Updated By: Katie Martin
CSCI 111
Date: 10/30/22
Read and solve the Kattis problem: https://open.kattis.com/problems/twostones 
Algorithm Steps:
		1. Read the number of stones
		2. Check if the number of stones is odd or even
    3.a. If the number is odd, Alice wins.
    3.b. Otherwise, Bob wins.
*/

#include <iostream>
#include <cassert>
#include <string>
using namespace std;

// Function prototypes
// given a positive integer, the function finds and returns 'even' or 'odd'
string oddOrEven(const int unsigned);
// function to test oddOrEven function
void testOddOrEven();
void testAnswer();
// given a positive integer, function returns the answer as expected by Kattis
string answer(const int unsigned);

int main(int argc, char* argv[])
{
  if (argc == 2 and string(argv[1]) == string("test")) {
    // FIXME1: call testOddOrEven function that unit tests oddOrEven function #FIXED
    testOddOrEven();
    // FIXME2: call the test function that unit tests answer function #FIXED
    testAnswer();
  }
  else {
    unsigned stones=0;
    // FIXME3: read in the stones #FIXED
    cin >> stones;
    cout << answer(stones) << endl;
  }
	return 0;
}

string oddOrEven(const int unsigned number) {
  // FIXME4: if the number divided by 2 has 0 remainder, return 'even' #FIXED
    if(number%2 == 0)
        return "even";
  // otherwise, return 'odd'
    else 
        return "odd";
}

string answer(const int unsigned stone) {
  string evenorodd = oddOrEven(stone);
  if (evenorodd == "odd") return "Alice";
  else return "Bob";
}

void testOddOrEven() {
  int unsigned number;
  number = 99999;
  assert(oddOrEven(number) == "odd");
  // FIXME5: Write 2nd test case #FIXED
  assert(oddOrEven(34) == "even");
  // FIXME6: Write 3rd test case #FIXED
  assert(oddOrEven(69) == "odd");
  cerr << "All test cases passed!\n";
}

// FIXME7: Write a function to test answer function #FIXED
void testAnswer() {
    int unsigned number;
    number = 34;
    assert(answer(number) == "Bob");
    assert(answer(12) == "Bob");
    assert(answer(55) == "Alice");

}
// Write at least 3 test cases