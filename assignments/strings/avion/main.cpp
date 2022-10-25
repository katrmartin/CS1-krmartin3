/*
Made by Katie Martin
Date: 10/21/22
Kattis - Avion

Algorithm:
    1. function prototypes
    2. make function that finds "FBI" and returns
    3. make another function that takes 5 user input, uses above function to solve, and either outputs the line its on or "HE GOT AWAY!"
    4. call functions in main
    5. testing function and call to main
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int avion(string word, int line);
void solve();
void test();

int main(int argc, char* argv[]) {
    if(argc == 2 && string(argv[1]) == "test")
        test();
    else
        solve();
    cout << endl;
    return 0;
}

int avion(string word, int line) {
    string search_str = "FBI";
    size_t found;
    found = word.find(search_str);
    
    
    if (found != string::npos)
        return line;
    else 
        return 0;
    
}

void solve() {
    string w1, w2, w3, w4, w5;
    cin >> w1;
    cin >> w2;
    cin >> w3;
    cin >> w4;
    cin >> w5;
    int answer;
   
    answer = avion(w1, 1);
    if(answer)
        cout << answer << " ";
    answer = avion(w2, 2);
    if(answer)
        cout << answer << " ";
    answer = avion(w3, 3);
    if(answer)
        cout << answer << " ";
    answer = avion(w4, 4);
    if(answer)
        cout << answer << " ";
    answer = avion(w5, 5);
    if(answer)
        cout << answer << " ";
    if(avion(w1, 1) != 1 && avion(w2, 2) != 2 && avion(w3, 3) != 3 && avion(w4, 4) != 4 && avion(w5, 5) != 5)
        cout << "HE GOT AWAY!";


}

void test() {
    string w1, w2, w3, w4;

    w1 = "HSWF3-LPN";
    assert(avion(w1, 1) == 0);
    w2 = "FBI23-ASH";
    assert(avion(w2, 2) == 2);
    w3 = "GSD3-FBI2";
    assert(avion(w3, 3) == 3);
    w4 = "FB13-DHABP";
    assert(avion(w4, 4) == 0);
    cerr << "All test cases passed!" << endl;
 
}