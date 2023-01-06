#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    int array[n];
    /*for (int i = 0; i < n; i++) {
        int t; a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

    }*/

    string s = "";
    cin >> s; cin.ignore();
    stringstream ss;
    ss << s;
    //make it so that ss fills in array
    for (int j = 0; j < n; j++) {
        ss >> array[j];
    }



    //all the input


    //compare nums in array to find closest to 0
        //conditions = if equally close to zero, positive integer is considered closest
        //conditions = if 0 temps provided, display 0

        
    


    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "result" << endl;
}