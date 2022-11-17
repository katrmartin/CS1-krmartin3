/*
Program by Katie Martin
11/15/22
Gradebook Program

Algorithm: 
    1. make a structure for student record
    2. make a sorting function
    3. make a function that solves the average test scores
    4. make a function that determines letter grade based on average test score
    5. make a function that reads in the data from file
    6. make a function that outputs the data into correct formatted version with average and letter grade
    7. call all functions in main and define a vector for student
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


struct student {
    string firstName;
    string lastName;
    float testGrades[4];
    float average;
};

bool order(student & p, student & d) { //sorts the students by average test score
    
    if (p.average!=d.average) {
        return p.average>d.average;
    }
    if (d.average==p.average) {
        
        return d.average=p.average;
    }
}

float average(student & a) { //solves and returns average test score based on 4 scores
    float sum = a.testGrades[0] + a.testGrades[1] + a.testGrades[2]
    + a.testGrades[3];
    float avg = sum/4.0;
    a.average = avg;
    return avg;
}

char letterGrade(student & b) { //returns letter grade based on average test score
    float avg = average(b);
    if (avg >= 90)
        return 'A';
    if (avg >= 80 && avg <=89)
        return 'B';
    if (avg >= 70 && avg <= 79)
        return 'C';
    if (avg >= 60 && avg <= 69)
        return 'D';
    else return 'F';

}

void readData(vector<student> & temp, string inputFileName) { //reads in all the data from selected input file
    ifstream fin(inputFileName);
    int counter = 0;
    while (true) {
        if (fin.eof()) break;
        student person;
        temp.push_back(person);
        fin >> temp[counter].firstName >> temp[counter].lastName >> temp[counter].testGrades[0]
        >> temp[counter].testGrades[1] >> temp[counter].testGrades[2] >> temp[counter].testGrades[3];
        average(temp[counter]);
        counter++;
        //gradebook.push_back(temp);
    }
}

void writeData(vector<student> & s) { //outputs data into output file in formatted way with the addition of average and letter grade
    string outFile;
    cout << "Enter output file name: ";
    getline(cin, outFile);
    ofstream fout(outFile, ios::out);
    sort(begin(s), end(s), order);
    fout << setw(80) << setfill('=') << "" << endl;
    fout << setfill(' ');
    fout << "fname" << setw(10) << "" << "lname" << setw(12) << "" 
    << "test1" << setw(3) << "" << "test2" << setw(3) << ""
    << "test3" << setw(3) << "" << "test4" << setw(3) << ""
    << "avg" << setw(3) << "" << "grade" << endl;
    fout << setw(80) << setfill('=') << "" << endl;
    fout << setfill(' ');

    
    int counter = 0;
    while (counter<s.size()) {
        fout << left << setw(10) << s[counter].firstName << setw(5) << "" << setw(18) << s[counter].lastName 
        << setw(8) << s[counter].testGrades[0] << setw(8) << s[counter].testGrades[1] << setw(8) <<
        s[counter].testGrades[2] << setw(7) << s[counter].testGrades[3] << setw(8)
        << average(s[counter]) << setw(8) << letterGrade(s[counter]) << endl;
        counter++;
    
    }
    fout << setw(80) << setfill('=') << "" << endl;

}
 


int main(int argc, char* argv[]) {
    if (argc == 2 && string(argv[1]) == "test") {
        //test();
        return 0;
    }



vector<student> gradebook;

    string inFile;
    cout << "Enter input file name: ";
    getline(cin, inFile);

    readData(gradebook, inFile);
    writeData(gradebook);

    cout << "All done. Enter to exit...";
    cin.get();
    return 0;
}


