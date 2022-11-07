/*
Kattis - What does the fox say?
Arrays Lab
Updated By: Katie Martin
CSCI 111
Date: FIXME
Read and solve the Kattis problem: https://open.kattis.com/problems/whatdoesthefoxsay   
Algorithm Steps:
	1. For each test case do the following:
    i. Read all the recorded sounds into a vector
    ii. Read individual animal sound until 'What does the fox say?' line
    iii. Replace all the matching sounds from the recorded sounds vecotor to "-"
    iv. Print the sounds that's left
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

void solve();
// function splits given string into vector of words
void splitString(vector<string> &, string);
// function 
void eraseAnimalSound(vector<string> &recordings, string sound);
void test_eraseAnimalSound();
void test_splitString();
string foxSays(vector<string> &);
void test_foxSays();

int main(int argc, char* argv[]) {
  if (argc == 2 and string(argv[1]) == string("test")) {
    // FIXME1: call unit test functions #FIXED
    test_eraseAnimalSound();
    test_splitString();
    test_foxSays();
  }
  // read the total number of test cases
  else
    solve();
  return 0;
}

void solve() {
  size_t T;
  cin >> T >> ws;
  
  while(T--) {
    //cout << "T = " << T << endl;
    vector<string> recordings;
    string sounds, animal_sound;
    getline(cin, sounds);
    //cout << sounds << endl;
    splitString(recordings, sounds);
    // read and parse animal sounds
    // don't know how many animals are there
    
    while (true) {
      getline(cin, animal_sound);
      // check for the question
      if (animal_sound == "what does the fox say?") break;
      istringstream iss(animal_sound);
      string animal, goes, sound;
      // parse three words
      iss >> animal >> goes >> sound;
      eraseAnimalSound(recordings, sound);
    }
    // FIXME2: call foxSays function and print the returned answer #FIXED
    cout << foxSays(recordings) << endl;

  }
}

string foxSays(vector<string> &recordings) {
  // return the answer string
  ostringstream oss;
  bool first = true;
  for(unsigned int i=0; i<recordings.size(); i++) {
    if (recordings[i] == "-") continue;
    if (first) {
      oss << recordings[i];
      first = false;
    }
    else
      oss << " " << recordings[i];
  }
  return oss.str();
}

void splitString(vector<string> &words, string text) {
    string word;
    stringstream ss(text);
    while (ss >> word) {
        words.push_back(word);
    }
}

void eraseAnimalSound(vector<string> &recordings, string sound) {
  // for each sound s in recordings vector
  for (string & s: recordings) {
    // FIXME3: if s matches with sound, set it to '-' #FIXED
    if (s == sound)
        s = '-';
  }
}

void test_splitString() {
  vector<string> answer;
  splitString(answer, "word");
  vector<string> actual = {"word"};
  assert(answer == actual);
  answer.clear();

  splitString(answer, "two word");
  vector<string> actual1 = {"two", "word"};
  assert(answer == actual1);
  // FIXME4: add 2 more test cases #FIXED
  answer.clear();

  splitString(answer, "two three word");
  vector<string> actual2 = {"two", "three", "word"};
  assert(answer == actual2);
  answer.clear();

  splitString(answer, "two three four word");
  vector<string> actual3 = {"two", "three", "four", "word"};
  assert(answer == actual3);
  answer.clear();

  cerr << "splitString(): All test cases passed!\n";
}

void test_foxSays() {
  vector<string> recordings = {"bo", "boo", "-", "ba", "-", "bo"};
  string ans = foxSays(recordings);
  assert(ans == "bo boo ba bo");
  // FIXME5: add 2 more test cases #FIXED

  vector<string> recordings2 = {"moo", "moa", "-", "moo"};
  string ans2 = foxSays(recordings2);
  assert(ans2 == "moo moa moo");

  vector<string> recordings3 = {"-", "toot", "-", "honk", "honk"};
  string ans3 = foxSays(recordings3);
  assert(ans3 == "toot honk honk");
  cerr << "foxSays(): All test cases passed!" << endl;
}

void test_eraseAnimalSound() {
  vector<string> recordings = {"bo", "boo", "meow", "ba", "wooon", "bo"};
  eraseAnimalSound(recordings, "bo");
  vector<string> expected = {"-", "boo", "meow", "ba", "wooon", "-"};
  assert(recordings == expected);
  // FIXME6: add 2 more test cases #FIXED

  vector<string> recordings2 = {"meow", "bark", "growl", "meow", "bark"};
  eraseAnimalSound(recordings2, "meow");
  vector<string> expected2 = {"-", "bark", "growl", "-", "bark"};
  assert(recordings2 == expected2);

  vector<string> recordings3 = {"woof", "woof", "meow", "woof", "meow"};
  eraseAnimalSound(recordings3, "woof");
  vector<string> expected3 = {"-", "-", "meow","-", "meow"};
  cerr << "eraseAnimalSound(): All test cases passed!" << endl;
}