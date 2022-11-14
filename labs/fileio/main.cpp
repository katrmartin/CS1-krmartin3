/*
    CS1 - File IO Lab
    Updated by: Katie Martin
    Date: 11/11/22
    The program reads numbers from a file and finds statistical values from those numbers.
    Lab demonstrates the file io and vector application. 
    Statistical value's definitions for mean, median, mode, etc. can be found here: https://www.purplemath.com/modules/meanmode.htm
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const float EPSILON = 1e-4; //accuracy upto 4 decimal points

// function prototypes
void readData(vector<int> &, const string);
int findMax(const vector<int> &);
int findMin(const vector<int> &);
float findMean(const vector<int> &); // average
int findRange(const vector<int> &);
float findMedian(vector<int>);
// bonus implement findMode function
int findMode(const vector<int> &);

void writeData(const vector<int> & numbers);
void test();

int main(int argc, char* argv[]) {
    if (argc == 2 && string(argv[1]) == "test") {
        test();
        return 0;
    }
    vector<int> numbers;
    string inFile;
    cout << "Enter input file name: ";
    getline(cin, inFile);
    readData(numbers, inFile);
    writeData(numbers);
    cout << "All done. Enter to exit...";
    cin.get();
    return 0;
}

void readData(vector<int> & numbers, const string inputFileName) {
    // FIXME1: Open inputFileName for reading data #FIXED
    ifstream fin(inputFileName);

    // read the data until eof marker and store each num into numbers vector
    int num;
    while (true) {
        if (fin.eof()) break;
        fin >> num;
        numbers.push_back(num);
    }
}

void writeData(const vector<int> & numbers) {
    // FIXME2 #FIXED
    /*
    Algorithm steps:
    1. Prompt user to enter output file name
    2. Store and use the file name to open the file in write mode
    3. Write output as shown in output.txt file with proper formatting using iomanip
    */

   string outFile;
   cout << "Enter output file name: ";
   getline(cin, outFile);
   ofstream fout(outFile, ios::out);
    fout << "List of numbers: ";
    for (int i = 0; i< numbers.size(); i++) {
        fout << numbers[i] << " ";
    }
    fout << endl;
    fout << endl;
    fout << setw(40) << setfill('=') << "" << endl;
    fout << setfill(' ');
    fout << setw(10) << "" << "Statistical Results" << setw(10) << "" << endl;
    fout << setw(40) << setfill('=') << "" << endl;
    fout << setfill (' ');
    fout << "Max" << setw(5) << "" << "Min" << setw(5) << "" << "Mean" << setw(5) << ""
        << "Median" << setw(5) << "" << "Range" << endl;
    fout << findMax(numbers) << setw(5) << "" << findMin(numbers) << setw(5) << ""
        << findMean(numbers) << setw(5) << "" << findMedian(numbers) << setw(5) << ""
        << findRange(numbers) << endl;

   
}

int findMax(const vector<int> & nums) {
    int max = nums[0];
    for(int n: nums)
        max = (n>max) ? n : max;
    return max;
}

int findMin(const vector<int> & nums) {
    // FIXME3 - implement function to find and return min value in nums vector #FIXED
    int min;
    min = *min_element(nums.begin(), nums.end());
    return min;
} 

float findMean(const vector<int> & nums) {
    // same as average
    long long int sum = 0;
    for(int n: nums)
        sum += n;
    return sum/float(nums.size());
}

int findRange(const vector<int> & nums) {
    // FIXME6 - implement function that finds and returns the range value #FIXED
    // range = max - min
    int min, max;
    min = findMin(nums);
    max = *max_element(nums.begin(), nums.end());

    return max - min;
}

float findMedian(vector<int> nums) {
    sort(nums.begin(), nums.end());
    float median;
    if (nums.size() % 2 == 0) {  // even set
        median = (nums[nums.size()/2] + nums[nums.size()/2-1])/float(2);
    } else { // odd set
        median = nums[nums.size()/2];
    }
    return median;
}

void test() {
    vector<int> numbers = {100, 10, 5, 0, -99, 10, 99};
    //cout << findMean(numbers) << " " << findMean(numbers)-17.857142 << endl;
    assert(fabs(findMean(numbers)-17.857142) <= EPSILON );
    assert(findMax(numbers) == 100);
    assert(findMedian(numbers) == 10);
    vector<int> numbers1 = {10, 10, 10, 0, -10, -10};
    assert(fabs(findMean(numbers1) -1.6667) <= EPSILON  );
    assert(findMax(numbers1) == 10);
    assert(findMedian(numbers1) == 5);
    // FIXME7: Write at least two test cases for other functions #FIXED
    vector<int> numbers2 = {6, 3, 2, 4, 1, 5};
    assert(findMin(numbers2) == 1);
    assert(findMax(numbers2) == 6);
    assert(findMedian(numbers2) == 3.5);
    assert(findRange(numbers2) == 5);
    assert(findMean(numbers2) == 3.5);


    cerr << "all test cases passed!\n";
}