/*
Program by: Katie Martin
Date: 9/26/22
CLI Menu, Conditionals, Functions, and Testing

Algorithm:
    1. Write function prototypes
    2. Define functions for several conditional statements
    3. Template a function to work for several types
    4. Greet the user & prompt them to enter 5 numbers
    5. Display menu options for the functions & call the function that the user's choice w/ switch statement
    6. Create a test function with 3 test cases
    7. BONUS - make a while loop for the user if they wish to use the functions until they quit the program
    */

#include <iostream>
#include <cassert>
using namespace std;

int num1, num2, num3, num4, num5;
int largestNum(int num1, int num2, int num3, int num4, int num5);
int smallestNum(int num1, int num2, int num3, int num4, int num5);
int floorNum(int num1, int num2, int num3, int num4, int num5);
int getMenuOption();

int largestNum(int num1, int num2, int num3, int num4, int num5) {
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        return num1; }
    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
        return num2; }
    else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) {
        return num3; }
    else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) {
        return num4; }
    else (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4); {
        return num5; }
}


int main() 
{
    cout << "Please enter 5 whole numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << largestNum(num1, num2, num3, num4, num5) << " is the larger number!" << endl;







    return 0;

}