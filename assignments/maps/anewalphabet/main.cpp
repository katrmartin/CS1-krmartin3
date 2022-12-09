/*
made by: Katie Martin
date: 12/5/22

algorithm:
    1. copy new alphabet into a map
    2. make translator function that translates english into new language from map and keeps other characters the same
    3. unittesting
*/

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <cassert>
using namespace std;


map<char, string> newAlphabet = {
    {'a', "@"}, {'b', "8"}, {'c', "("}, {'d',"|)"},
    {'e', "3"}, {'f', "#"}, {'g', "6"}, {'h', "[-]"},
    {'i', "|"}, {'j', "_|"}, {'k', "|<"}, {'l', "1"},
    {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"},
    {'p', "|D"}, {'q', "(,)"}, {'r', "|Z"}, {'s', "$"},
    {'t', "']['"}, {'u', "|_|"}, {'v', "\\/"}, {'w', "\\/\\/"}, 
    {'x', "}{"}, {'y', "`/"}, {'z', "2"}
};

void testTranslator();
string translator(const string&);

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        testTranslator();
    else {
    string input = "";
    getline(cin, input);
    cout << translator(input) << endl;
    }
    return 0;
}

string translator(const string & input) {
    string output = "";
    for (char f : input) {
        f = char(tolower(f));
        //need to also take chars that aren't in the map
        if(newAlphabet.count(f) == 0) {
           output += f; 
        
        }
        else output += newAlphabet.at(f);
    }
    return output;
        
}

void testTranslator() {
    string input2 = "my name is katie!";
    string output2 = "[]\\/[]`/ []\\[]@[]\\/[]3 |$ |<@']['|3!";
    assert(translator(input2) == output2);
    input2= "i'm almost done with This Assignment!";
    output2 = "|'[]\\/[] @1[]\\/[]0$'][' |)0[]\\[]3 \\/\\/|']['[-] ']['[-]|$ @$$|6[]\\[][]\\/[]3[]\\[]']['!";
    assert(translator(input2) == output2);
    input2 = "He11o W0rld";
    output2 = "[-]3110 \\/\\/0|Z1|)";
    assert(translator(input2) == output2);
    input2 = "12345testING";
    output2 = "12345']['3$']['|[]\\[]6";
    assert(translator(input2) == output2);

    cerr << "All test cases passed!" << endl;
}