/*
Kattis - Dog & Gopher
Loop Lab
Updated by: Katie Martin
CSCI 111
Date: 10/7/22

Read and solve the kattis problem

Algorithm steps:
    1. read gopher and dog's coordinates
    2. define a function to find and return the Euclidean distance between the two points
    3. for each gopher hole coordinate:
        a. find the distance between the gopher position and the hole
        b. find the distance between the dog position and the hole
        c. if the dog's distance is larger or equal to twice the distance of gopher,
           gopher can get away through that hold
                c.1. stop testing other holes
    4. if no safe hole is found, the gopher cannot escape
*/

#include <iostream>
#include <cassert>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

//function prototypes
//function finds the Euclidean distance between two given points (x1, y1) and (x2, y2)
float distance(const float x1, const float y1, const float x2, const float y2);
//function to test distance function
void testDistance();

#define TOLERANCE 1e-6 // 0.000001

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == string("test")) {
        testDistance();
    }
    else {
        float gopherX, gopherY;
        float x, y; //variables to read gopher hole coordinates
        float dogX, dogY;
        string answer = "The gopher cannot escape.";
        float gopher_dist, dog_dist=0;
        //read gopher's coordinates
        cin >> gopherX >> gopherY;
        //FIXME2: read dog's coordinates
        cin >> dogX >> dogY;
        while (cin >> x >> y) { //while there's hole coordinates to read
            //find gopher's distance from (x, y)
            gopher_dist = distance(gopherX, gopherY, x, y);
            //store the returned result into answer variable
            //FIXME3: find dog's distance from (x, y)
            dog_dist = distance(dogX, dogY, x, y);
            if (dog_dist >= 2*gopher_dist) {
                ostringstream oss;
                oss << fixed << showpoint << setprecision(3);
                oss << "The gopher can escape through the hole at (" << x << "," << y << ").";
                answer = oss.str();
                break; //no need to test more holes; the first one will do
                }
            }
            cout << answer << endl;
        }
            return 0;
    }

//function implementation
float distance(const float x1, const float y1, const float x2, const float y2) {
    float d = 0;
    //FIXME4: find the Euclidean distance between two points on 2-d coordinates
    d = sqrt(pow((x2 - x1),(2.0)) + pow((y2 - y1),(2.0) ));
    //store the distance into the 'd' variable
        return d;
}

//function to test area function
void testDistance() {
    float x1, y1, x2, y2, answer, expected;
    x1 = 1.000f;
    y1 = 1.000f;
    x2 = 2.000f;
    y2 = 2.000f;
    answer = distance(x1, y1, x2, y2);
    expected = 1.4142135623731;
    cout << fixed << showpoint << setprecision(3) << endl;
    cout << answer << " " << expected << endl;
    assert(abs(answer-expected) < TOLERANCE);
    //FIXME5: write 2nd test case
    x1 = 1.000f;
    y1 = 1.000f;
    x2 = 4.000f;
    y2 = 5.000f;
    answer = distance(x1, y1, x2, y2);
    expected = 5;
    cout << fixed << showpoint << setprecision(3) << endl;
    cout << answer << " " << expected << endl;
    assert(abs(answer-expected) < TOLERANCE);
    //FIXME6: write 3rd test case
    x1 = 2.500f;
    y1 = 3.000f;
    x2 = 5.000f;
    y2 = 4.000f;
    answer = distance(x1, y1, x2, y2);
    expected = 2.6925824035673;
    cout << fixed << showpoint << setprecision(3) << endl;
    cout << answer << " " << expected << endl;
    assert(abs(answer-expected) < TOLERANCE);
    //FIXME7: write 4th test case
    x1 = 7.000f;
    y1 = 2.500f;
    x2 = 6.000f;
    y2 = 3.200f;
    answer = distance(x1, y1, x2, y2);
    expected = 1.2206555615734;
    cout << fixed << showpoint << setprecision(3) << endl;
    cout << answer << " " << expected << endl;
    assert(abs(answer-expected) < TOLERANCE);
    cerr << "All test cases passed!\n";

}

