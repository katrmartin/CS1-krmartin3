/*
Map Lab
Kattis - Seven Wonders
Updated by: Katie Martin
Date: 12/1/22
Solution to Seven Wonders Problem: https://open.kattis.com/problems/sevenwonders
Algorithm steps:
1. Read cards into a string variable
2. use map<char, int> to keep track of count of each card played
  - update map: for each card, update its count
3. find regular points following the instruction
  - points = sum of (each card_count)^2
4. add bonus points if any
  - find # of sets of three cards and mulitiply it by 7
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <map>
#include <string>

using namespace std;

using pos_int = unsigned int; // create type alias

// function prototypes
void countCards(const string&, map<char, pos_int>&);
pos_int countPoints(const map<char, pos_int>&);
pos_int countBonus(const map<char, pos_int>&);
void testCountPoints();
void testCountCards();
void solve();
void unittest();

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        unittest();
    else
        solve();
}

// solving the problem for kattis
void solve() {
    string cards;
    pos_int points = 0;
    map<char, pos_int> cardCount;
    // string consists of only uppercase letters (no spaces) upto 50 chars
    // FIXME1 #FIXED
    cin >> cards;
    // read played cards into cards variable
    // FIXME2 #FIXED
    // count cards - call countCards function passing cards and cardCount
    // FIXME3 #FIXED
    countCards(cards, cardCount);
    // count points - call countPoints function and update points
    // FIXME4 #FIXED
    points = countPoints(cardCount);
    // count bonus points - call countBonus function and update points
    points += countBonus(cardCount);
    cout << points << endl;
}

void countCards(const string& cards, map<char, pos_int>& cardCount) {
    // step 2: update cardCount map with count of each card played
    // for each card in cards
    for (char card: cards) {
      // check if card is already in wonders map
      auto find = cardCount.find(card);
      if (find == cardCount.end()) // card not found
        // add it to the wonders map
        cardCount[card] = 1;
      else { 
        // FIXME5: update value/count of card #FIXED
        cardCount[card]++;
        //cerr << "FIXME\n";
      }
    }
}

pos_int countPoints(const map<char, pos_int>& cardCount) {
    // algorithm step 3 - calculate regular points
    pos_int points = 0;
    for (auto pair: cardCount) { // pair = <card, count>
      // FIXME6 - Update the points by adding count^2 #FIXED
      points += pow(pair.second, 2);

    }
    return points;
}

pos_int countBonus(const map<char, pos_int>& cardCount) {
    // algorithm step 4 - calculate bonus points
    // find # of sets of three different cards and mulitiply it by 7 and add it to the total bonus
    pos_int bonus = 0;
    pos_int minCardCount = 999999;
    pos_int uniqueCardCount = cardCount.size();
    if (uniqueCardCount == 3) {
      for(auto pair: cardCount) {
        minCardCount = pair.second < minCardCount? pair.second : minCardCount;
      }
      // set bonus to minCardCount x 7
      bonus = minCardCount * 7;
    }
    return bonus;
}

// unit testing countCards()
void testCountCards() {
    map<char, pos_int> cardCount;
    countCards("TTT", cardCount);
    assert(cardCount['T'] == 3);
    cardCount.clear();
    countCards("TCG", cardCount);
    assert(cardCount['T'] == 1);
    assert(cardCount['C'] == 1);
    assert(cardCount['G'] == 1);
    // FIXME7 #FIXED
    // write at least two more test cases to test countCards()
    cardCount.clear();
    countCards("CCC", cardCount);
    assert(cardCount['C'] == 3);
    cardCount.clear();
    countCards("CTGTC", cardCount);
    assert(cardCount['C'] == 2);
    assert(cardCount['T'] == 2);
    assert(cardCount['G'] == 1);
    cerr << "All test cases passed!\n";
}

// unit testing countPoints()
void testCountPoints() {
    map<char, pos_int> cardCount;
    countCards("TTT", cardCount);
    assert(countPoints(cardCount) == 9);
    cardCount.clear();
    countCards("TCG", cardCount);
    assert(countPoints(cardCount) == 3);
    // FIXME8 #FIXED
    // write at least two more test cases to test answer()
    cardCount.clear();
    countCards("TTCGT", cardCount);
    assert(countPoints(cardCount) == 11);
    cardCount.clear();
    countCards("GTTCGC", cardCount);
    assert(countPoints(cardCount) == 12);
    cerr << "All test cases passed!\n";
}

// unit testing countBonus()
void testCountBonus() {
    map<char, pos_int> cardCount;
    countCards("TTT", cardCount);
    assert(countBonus(cardCount) == 0);
    cardCount.clear();
    countCards("TCG", cardCount);
    assert(countBonus(cardCount) == 7);
    cardCount.clear();
    countCards("TTTCCCGG", cardCount);
    assert(countBonus(cardCount) == 14);
    // FIXME9 #FIXED
    // write at least two more test cases to test countBonus()
    cardCount.clear();
    countCards("CCC", cardCount);
    assert(countBonus(cardCount) == 0);
    cardCount.clear();
    countCards("CGTT", cardCount);
    assert(countBonus(cardCount) == 7);
    cerr << "All test cases passed!\n";
}

// unit testing all functions
void unittest() {
    // FIXME10 - call all unit test functions #FIXED
    testCountCards();
    testCountPoints();
    testCountBonus();


    cerr << "All unit test cases passed!\n";
}