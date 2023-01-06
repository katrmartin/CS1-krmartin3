#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void inputCollector();

//collect input
    //1st line how many test cases
    //rest of lines are the test cases
    //first int of each test case is how many students are in the class
    //rest of ints are the average grades
//calculate the class average per test case
//calculate how many students are above average per test case
//turn that into a percentage with exactly 3 decimals and output


 int main() {
    inputCollector();
    return 0;
 }

 void inputCollector() {
    vector<int> arr;
    int testCases = 0;
    cin >> testCases;
    string input;
    for(int i = 0; i < testCases + 1; i++) {
        istringstream is(input);
        int num = 0;
        while(is>>num) arr.push_back(num);
    }

            
        
    


}

    /*
    vector< int >arr;
    string input;
    getline(cin, input);
    istringstream is(input);
    int num;
    while(is>>num) arr.push_back(num);
    */