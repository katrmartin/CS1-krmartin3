/*
Program by: Katie Martin
Date: 10/21/22
Kattis - Apaxiaans

Algorithm:
    1. create function prototypes
    2. make function that solves the problem
        2. a. takes in word, checks for consecutive letters, erases all but one of consecutive, returns new word
    3. make function that reads in word and calls above function to solve word
    4. call above function in main
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void test();
string solve(string name);
void answer();

int main(int argc, char* argv[]) {
    if (argc == 2 && string(argv[1]) == "test")
        test();
    else
        answer();
    return 0;
}

string solve(string name) {

    for (int i = 0; i < name.length()-1; i++)
        if(name[i] == name[i+1]) {
            name.erase(i, 1);
            i--;
        }
            return name;

        }

void answer() {
    string name;
    cin >> name; //enter name

    solve(name);
    cout << solve(name) << endl;
}

void test() {
    assert(solve("roobert") == "robert");
    assert(solve("carrrriis") == "caris");
    assert(solve("wowwwwwieeeee") == "wowie");
    assert(solve("Chaaaartruese") == "Chartruese");

    cerr << "All test cases passed!" << endl;

}

        //find substring of consecutive characters
        //replace consecutive characters with only one of the character
        //return new word
            
        
