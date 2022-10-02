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
#include <cmath>
using namespace std;



float num1, num2, num3, num4, num5, sum;
template <class T1, class T2, class T3, class T4, class T5>
T1 largestNum(T1 num1, T2 num2, T3 num3, T4 num4, T5 num5);
float smallestNum(float num1, float num2, float num3, float num4, float num5);
string floorNum(float num1, float num2, float num3, float num4, float num5);
float floorSum();
int getMenuOption();
int option;
void test();

void test() {

    assert(largestNum(1, -5, 4, 11, 6) == 11);
    assert(largestNum(2.5, -7, 3, 16.7, 5) == 16.7);
    assert(largestNum(3, -2.5, 4.23, 5, 4) == 5);

    assert(smallestNum(3, -2.5, 4.23, 5, 4) == -2.5);
    assert(smallestNum(1, -5, 4, 11, 6) == -5);
    assert(smallestNum(2.5, -7, 3, 16.7, 5) == -7);

    assert(floorNum(3, -2.5, 4.23, 5, 4) == "odd");
    assert(floorNum(2.5, -7, 3, 16.7, 5) == "even");
    assert(floorNum(-5, -3, -1, 1, 8) == "zero");
    
    cerr << "All test cases passed!" << endl;

}

template <class T1, class T2, class T3, class T4, class T5>
T1 largestNum(T1 num1, T2 num2, T3 num3, T4 num4, T5 num5) {
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) 
    {
        return num1; }
    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) 
    {
        return num2; }
    else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) 
    {
        return num3; }
    else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) 
    {
        return num4; }
    else (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4); 
    {
        return num5; }
}

float smallestNum(float num1, float num2, float num3, float num4, float num5) {
    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) 
    {
        return num1; }
    else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) 
    {
        return num2; }
    else if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5) 
    {
        return num3; }
    else if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5) 
    {
        return num4; }
    else (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4); 
    {
        return num5; }

}

string floorNum(float num1, float num2, float num3, float num4, float num5) {
    int sum;
    sum = num1 + num2 + num3 + num4 + num5;
    string even, odd, zero;

    if(floor(sum) == 0)
    {
        return "zero";
    }
    else if(floor(sum%2) == 0) 
        return "even"; 
    else 
        return "odd"; 
    
    
}

int getMenuOption() {
    int option;
    cout << "Please enter one of the following menu options (1-4):\n";
    cout << "1 -- Largest Number" << endl;
    cout << "2 -- Smallest Number" << endl;
    cout << "3 -- Is the sum even, odd, or zero?" << endl;
    cout << "4 -- Quit" << endl;
    cin >> option;
    return option;
}

//zero is not working for some reason

int main(int argc, char* argv[]) 
{
    /*
    cout << "Please enter 5 whole numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << largestNum(num1, num2, num3, num4, num5) << " is the largest number!" << endl;
    cout << smallestNum(num1, num2, num3, num4, num5) << " is the smallest number!" << endl;
    cout << "The floor of the sum of the numbers is " << floorNum(num1, num2, num3, num4, num5) << endl;
    */

    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    int option = 0;

    while(option != 4)
    {
        option = getMenuOption();
        if (option !=4)
        {
        cout << "Please enter 5 whole numbers separated by spaces: ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        }
        

        switch(option) {
        case 1:
        {
            cout << largestNum(num1, num2, num3, num4, num5) << " is the largest number!\n" << endl;
            break;
        }
        case 2:
        {
            cout << smallestNum(num1, num2, num3, num4, num5) << " is the smallest number!\n" << endl;
            break;
        }
        case 3:
        {
            cout << "The floor of the sum of the numbers is " << floorNum(num1, num2, num3, num4, num5) << endl << endl;
            break;
        }
       
        default:
        {

        }
    }
    }

    return 0;

}