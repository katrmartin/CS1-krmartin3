/*
Kattis - Triangle Area problem
Function and Unit Testing
Updated By: Katie Martin
CSCI 111
Date: 9/23/22
Read and solve Triangle Area problem: https://open.kattis.com/problems/triarea 
Algorithm:
	1. Read height and base of a right triangle
	2. Define a function to find and return area given height and base of a right triangle
    2.a Area is given by the equation: (Base * Height)/2
    3. Call the function to print the result
    4. Write a test function to test the area function implemented in step 2
*/

#include <iostream>
#include <cstdio>
#include <cassert> //assert function
#include <string>
using namespace std;

// Function prototypes
// Function finds the answer from given string and restuns the result as a string
float areaOfTriangle(const unsigned height, const unsigned base);
// function to test area function
void testArea();

#define MAX_ERROR 1e-7 // 10^-7 or 0.0000007

int main()
{
  testArea();
  // call testArea function
  unsigned height, base;
  float answer;
  //cout << "Hello! Please enter a base and a height for a triangle separated by a space: ";
  // read height and base into corresponding variables
  cin >> height >> base;
	// FIXME1: Call area function passing proper arguments #FIXED
	// store the returned result into answer variable
	answer = areaOfTriangle(height, base);
	// print answer
	printf("%.7f\n", answer);
	return 0;
}

// Function implementations
float areaOfTriangle(const unsigned height, const unsigned base) {
  float answer = (base * height) / 2.0;
  // FIXME2: Find the area of triangle using the formular given in algorithm step: 2.a
  // store the area into area variable
	return answer;
} 

// function to test area function
void testArea() {
  float height, base;
  float answer, expected;
  height = 10.0;
  base = 5.0;
  answer = areaOfTriangle(height, base);
  expected = 25.0;
  assert(abs(answer-expected) < MAX_ERROR);

  height = 15;
  base = 25;
  answer = areaOfTriangle(height, base);
  expected = 187.5;
  assert(abs(answer-expected) < MAX_ERROR);

  height = 11;
  base = 15;
  answer = areaOfTriangle(height, base);
  expected = 82.5;
  assert(abs(answer-expected) < MAX_ERROR);

  height = 20;
  base = 13;
  answer = areaOfTriangle(height, base);
  expected = 130.0;
  assert(abs(answer-expected) < MAX_ERROR);

  height = 3;
  base = 4;
  answer = areaOfTriangle(height, base);
  expected = 6;
  assert(abs(answer-expected) < MAX_ERROR);
  // FIXME3: Write 2nd test case #FIXED
  // FIXME4: Write 3rd test case #FIXED
  // FIXME5: Write 4th test case #FIXED
  cerr << "All test cases passed!\n";
}