/*made by: Katie Martin
updated: 10/19/22*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string hiss(string word) {
    string found, search_str = "ss";
    found = word.rfind(search_str);

    if (found == string::npos) return search_str;
        else return search_fail;
}

int main() {
    string word;
    cin >> word;
    cout << hiss(word) << endl;
    return 0;
}