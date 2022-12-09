/*
Made by: Katie Martin
date: 12/8/22
kattis - babelfish

Algorithm:
    1. make empty dictionary map
    2. make function to generate dictionary, splits the input and adds it to the map
    3. make function that finds if the key exists or outputs "eh"
    4. unittesting

*/

#include <iostream>
#include <cassert>
#include <string>
#include <map>

using namespace std;

map<string, string> dictionary;
void dictionaryGenerator();
string foreignToDictionaryTranslator(string);
void testForeignToDictionaryTranslator();

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test") {
        testForeignToDictionaryTranslator();
    }
    else {
        string foreignInput, dictWords = ""; //english and foreign language user input
        //getline(cin, foreignInput);
        //getline(cin, dictWords);
        dictionaryGenerator();

        while (getline(cin, dictWords))
        {
        cout << foreignToDictionaryTranslator(dictWords) << endl;
        }
        



        return 0;
        }
}



void dictionaryGenerator() {
    //add new dictionary translations to map as pairs
    //maybe have it take space as stopper, then add other part as the pair
    string a;
    while (getline(cin, a) and a != "") {
        string english, foreign = "";
        int space = a.find(' ');
        english = a.substr(0, space); //separates english word from string
        foreign = a.substr(space + 1); //separates foreign word from string
            
        dictionary[foreign] = english; //adds english and foreign word to map
            
        //need to compare map pairs with next inputted given dictionary words

    }


}


string foreignToDictionaryTranslator(string c) {
    if (dictionary.count(c) == 1)
        return dictionary[c];
    else
        return "eh";

}

void testForeignToDictionaryTranslator() {
    dictionary["ogday"] = "dog";
    string testing = "ogday";
    assert(foreignToDictionaryTranslator(testing) == "dog");
    testing = "cat";
    assert(foreignToDictionaryTranslator(testing) == "eh");
    cerr << "All test cases passed!" << endl;
    testing = "cow";
    assert(foreignToDictionaryTranslator(testing) == "eh");
    dictionary["owday"] = "cow";
    testing = "owday";
    assert(foreignToDictionaryTranslator(testing) == "cow");


}
