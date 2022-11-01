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
#include <iterator>
#include <functional>

using namespace std;

void userInput(string names[], int size);
string order(string names[], int size);
void test();

int main(int argc, char* argv[]) {
  if (argc == 2 and string(argv[1]) == string("test")) 
    test();
else {
    int size;
    //cout << "How many names would you like to enter: ";
    cin >> size;
    string *names = new string[size];
    userInput(names, size);
    cout<<order(names, size) << endl;
    }
    return 0;
}

void userInput(string names[], int size) {
    //cout << "Please enter " << size << " names." << endl;
    for(int i = 0; i<size; i++) {
        //cout << "Enter name: ";
        cin >> names[i];
    }
}

string order(string names[], int size) {
    string newNamesA[size];
    string newNamesD[size];
    for(int i = 0; i < size; i++) {
        newNamesA[i] = names[i];
        newNamesD[i] = names[i];
    }

    sort(newNamesA, newNamesA + sizeof(newNamesA) / sizeof(newNamesA[0]));
    sort(newNamesD, newNamesD + sizeof(newNamesD) / sizeof(newNamesA[0]), greater<string>());
    //sort(begin(newNamesD), end(newNamesD), greater<string>());

    bool isIncreasing = true;
    for(int i = 0; i < size; i++) {
        if (newNamesA[i] != names[i])
            isIncreasing = false;
    }
    bool isDecreasing = true;
    for(int i = 0; i < size; i++) {
        if (newNamesD[i] != names[i])
            isDecreasing = false;
    }
    if (isIncreasing == true)
        return "INCREASING";
    else if (isDecreasing == true)
        return "DECREASING";
    else
        return "NEITHER";





}
void test() {
    string *names;
    names = new string[4] {"JUSTON", "MOLLY", "KATIE", "JARAH"}; 
    assert(order(names, 4) == "NEITHER");
    names = new string[3] {"ALEN", "ALICE", "BRANDON"}; 
    assert(order(names, 3) == "INCREASING");
    names = new string[5] {"ZOE", "NOURI", "MARA", "HANNAH", "BALDWIN"}; 
    assert(order(names, 5) == "DECREASING");
    names = new string[2] {"LARA", "FINGER"}; 
    assert(order(names, 2) == "DECREASING");
    cerr << "All test cases passed *sound of tears*" << endl;


}
