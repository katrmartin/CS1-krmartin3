/*
Program by Katie Martin
11/15/22
Gradebook Program

Algorithm: FIXME
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

bool order(student & p, student & d) {
    if (p.average!=d.average) {
        return p.average>d.average;
    }
    if (d.average==p.average) {
        return d.average=p.average;
    }
}

float average(student & a) {
    float sum = a.testGrades[0] + a.testGrades[1] + a.testGrades[2]
    + a.testGrades[3];
    float avg = sum/4.0;
    a.average = avg;
    return avg;
}

char letterGrade(student & b) {
    float avg = average(b);
    if (avg >= 90)
        return 'A';
    if (avg >= 80)
        return 'B';
    if (avg >= 70)
        return 'C';
    if (avg >= 60)
        return 'D';
    else return 'F';

}

void readData(vector<student> & temp, string inputFileName) {
    ifstream fin(inputFileName);
    int counter = 0;
    while (true) {
        if (fin.eof()) break;
        student person;
        temp.push_back(person);
        fin >> temp[counter].firstName >> temp[counter].lastName >> temp[counter].testGrades[0]
        >> temp[counter].testGrades[1] >> temp[counter].testGrades[2] >> temp[counter].testGrades[3];
        counter +=1;
        //gradebook.push_back(temp);
    }
}

void writeData(vector<student> & s) {
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
        fout << s[counter].firstName << setw(10) << "" << s[counter].lastName << setw(12) << "" 
        << s[counter].testGrades[0] << setw(3) << "" << s[counter].testGrades[1] << setw(3) << ""
        << s[counter].testGrades[2] << setw(3) << "" << s[counter].testGrades[3] << setw(3) << ""
        << average(s[counter]) << setw(3) << "" << letterGrade(s[counter]) << endl;
        counter +=1;
    
    }

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


