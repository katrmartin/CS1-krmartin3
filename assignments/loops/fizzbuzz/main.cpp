/*
Program: FizzBuzz
Created by: Katie Martin
Date: 10/10/22
CSCI 111

    Algorithm:
        1. create function that find divisibility of number and returns Fizz, Buzz, or FizzBuzz
        2. create a test function for above function with 4 test cases
        3. make unittest argument work in main
        4. in main, prompt user to enter 3 integers, 2 numbers to check divisibility and a max number
        5. create loop that calls first function for every number to max number
*/



#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string FizzBuzz(int i, int x, int y)
{
    if(i%x == 0 && i%y == 0)
        return "FizzBuzz";

        else if(i%x == 0)
        return "Fizz";

        else if(i%y == 0)
        return "Buzz";

        else
        return (to_string(i));
}

void test() {
    assert(FizzBuzz(6, 1, 2) == "FizzBuzz");
    assert(FizzBuzz(9, 3, 5) == "Fizz");
    assert(FizzBuzz(7, 5, 7) == "Buzz");
    assert(FizzBuzz(4, 5, 8) == "Buzz");

    cerr << "All test cases passed!" << endl;

}


int main(int argc, char* argv[]) {
    if (argc == 2 && string(argv[1]) == "test")
    {
        test();
        return 0;
    }
    int x, y, z;
    cin >> x >> y >> z;

    for (int i = 1; i <= z ; i++) {

        cout << FizzBuzz(i,x,y) << endl;
        
    }



    return 0;
}