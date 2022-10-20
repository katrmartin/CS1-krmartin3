/*
Kattis - Hissing Microphone Problem
Updated By: Katie Martin
Date: 10/20/22
Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read a string
2. Search for "ss" substring in the string
    i. if found, print "hiss"
    ii. otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string hiss (const string &word);
void test();
void solve();

string hiss(const string &word) {
    // FIXME3 - implement algorithm in step 2 #FIXED
    string search_str;
    size_t found;
    search_str = "ss";

    found = word.rfind(search_str);

    if (found == string::npos) return "no hiss";
        else return "hiss";
}

void solve() {
string word;
    // FIXME5 - read string into word #FIXED
    cin >> word;
    cout << hiss(word) << endl;
    
}

int main(int argc, char* argv[]) {
  if (argc == 2 and string(argv[1]) == "test") {
    test();
  }
    else {
        solve();
    }
        return 0;
}

void test() {
    // FIXME4 - write at least two test cases to test hiss() #FIXED
    assert(hiss("hello") == "no hiss");
    assert(hiss("list") == "no hiss");
    assert(hiss("chess") == "hiss");
    assert(hiss("chriss") == "hiss");
    assert(hiss("pillow") == "no hiss");

    cerr << "All test cases passed!";
}
